#include "common.h"
#include "debug.h"
#include "ftrace.h"

/****************************************************************/
/************************ ftrace ******************************/
#ifdef CONFIG_FTRACE


void ftrace(uint64_t pc, uint64_t dnpc, uint32_t inst);
static bool check_elf(FILE * fp);

int is_call(uint64_t pc, int64_t dnpc,uint32_t inst);
char* find_func_name(uint64_t addr);

int func_number = 0;
function_info *fc;
int call_times = 0;
// ftrace
char* ftrace_log = "/home/ran/ysyx/ysyx-workbench/npc/build/ftrace-log.txt";
FILE* ftrace_fp;


static bool check_elf(FILE * fp)
{

  //int fseek(FILE *stream, long int offset, int whence)
  //函数设置流stream的文件位置为给定的偏移 offset，参数 offset 意味着从给定的 whence 位置偏移的字节数
  //SEEK_SET	0	/* Seek from beginning of file.  */
  //SEEK_CUR	1	/* Seek from current position.  */
  //SEEK_END	2 /* Seek from end of file.  */
  
  fseek(fp, 0, SEEK_SET);/* 查找文件的开头 */
  Ehdr ehdr;//定义ELF文件头(描述整个文件的组织结构)
  
  //size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
  //函数从给定流 stream 读取数据到 ptr 所指向的数组中。
  /*
    ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
    size -- 这是要读取的每个元素的大小，以字节为单位。
    nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
    stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
  */
  int ret = fread(&ehdr, sizeof(Ehdr), 1, fp);//从fp读取数据存储到ehdr
  assert(ret == 1);//如果ret !=1,则终止程序
  
  //判断elf文件类型
  //e_ident前4个字节是ELF的Magic Number 
  //e_ident 字段前四位为文件标识，一般为“\x7fELF”，通过这四位，可以查看该文件是否为ELF文件
  if(ehdr.e_ident[0] != 0x7f || ehdr.e_ident[1] != 'E' || ehdr.e_ident[2] != 'L' || ehdr.e_ident[3] != 'F')
  {
    Log_red("Load a non-ELF file, error!");
    return 0;
  }

  //判断ELF文件是32位还是64位(肯定是64位)
  if(ehdr.e_ident[4] != MUXDEF(CONFIG_ISA64, ELFCLASS64, ELFCLASS32))
  {
    Log_red("Elf refers to not suppored ISA, elf is ignored");
    return 0;
  }

  //第6个字节指明了数据的编码方式
  //little endian：将低序字节存储在起始地址（低位编址）
  if(ehdr.e_ident[5] != ELFDATA2LSB)
  {
    Log_red("Not supported little edian, elf is ignored");
    return 0;
  }

  //ehdr.e_shoff表示section header table在文件中的 offset，如果这个 table 不存在，则值为0。
  //根据这个变量能找到节头表
  if(ehdr.e_shoff == 0) 
  {
    Log_red("No Sections header table. Elf is ignored.");
    return 0;
  }

  //ehdr.e_shnum表示节头表中header的数目
  //如果文件没有节头表, e_shnum的值为0。
  //e_shentsize乘以e_shnum，就得到了整个section header table的大小。
  if(!ehdr.e_shnum) 
  {
    Log_red("Too many sections. Elf is ignored.");
    return 0;
  }

  return 1;
}

function_info* decode_elf(char* elf_file_name)
{
  assert(elf_file_name != NULL);
  // Log("进入decode_elf\n");//会导致段错误(疑惑？？)
  printf("%s\n", ANSI_FMT("进入 decode_elf", ANSI_FG_GREEN));

  FILE *fp;
  // get elf size
  fp = fopen(elf_file_name, "r");

  if(check_elf(fp) == 0)  //初步检查是否是elf文件
   assert(0);

  fseek(fp, 0, SEEK_END);//fp移动到elf文件末尾
  int elf_size = ftell(fp);//该函数用于得到文件位置指针fp当前位置相对于文件首的偏移字节数
  
  // copy elf file to char *
  char elf[elf_size];
  fseek(fp, 0, SEEK_SET);//fp移动到elf文件开始
  int ret = fread(&elf, elf_size, 1, fp);//将整个elf文件内容复制到char elf
  assert(ret == 1);
  fclose(fp);

  // read elf header table(读ELF头)
  Elf64_Ehdr ehdr;//定义ELF头(描述整个文件的组织结构)
  memcpy(&ehdr, elf, sizeof(Elf64_Ehdr));
  // printf("ehdr.e_shnum = %d\n",ehdr.e_shnum);//符合elf头中内容
  // printf("ehdr.e_shoff = %ld\n",ehdr.e_shoff);//符合elf头中内容
  
  // read section header table(读节头表)
  // ehdr.e_shnum表示节头表中共有多少个节
  Elf64_Shdr shdr[ehdr.e_shnum];//定义ELF文件节头表(section header table)
  memcpy(&shdr, elf + ehdr.e_shoff, sizeof(Elf64_Shdr)*ehdr.e_shnum);
   //从elf数组起始+节头表对应偏置，复制所有节大小的内容到shdr，形成节头表
  
  // for(int i = 0; i < ehdr.e_shnum; i++)
  // {
  //   printf("i = %d,shdr[i].sh_type = %d\n", i,shdr[i].sh_type);
  // }

  // find the offset of strtab and symtab
  Elf64_Shdr shdr_sym;
  for(int i = 0; i < ehdr.e_shnum; i++) 
  {
    if(shdr[i].sh_type == SHT_SYMTAB) 
    {
      // printf("section类型为符号表\n");
      shdr_sym = shdr[i];
    }
  }
  Elf64_Shdr shdr_str;
  for(int i = 0; i < ehdr.e_shnum; i++)
  {
    if(shdr[i].sh_type == SHT_STRTAB)
    {
      // printf("section类型为字符串表\n");
      shdr_str = shdr[i];
      break;
    }
  }

  // read symtab(读符号表)
  int symtab_num = shdr_sym.sh_size / sizeof(Elf64_Sym);//计算出符号表数目,符合readelf -s看到的Num
  // printf("symtab_num = %d\n", symtab_num);
  Elf64_Sym sym[symtab_num];//定义‘符号表结构体’数组
  memcpy(&sym, elf + shdr_sym.sh_offset, shdr_sym.sh_size);
  
  // find FUNC in symtab, find the name of FUNC and the addr of FUNC
  // 计算有多少个FUNC
  for(int i = 0; i < symtab_num; i++) 
  {   
    // printf("ELF64_ST_TYPE(sym[i].st_info) = %d\n", ELF64_ST_TYPE(sym[i].st_info));
    if(ELF64_ST_TYPE(sym[i].st_info) == STT_FUNC) //根据printf结果，结合readelf -s看到的，sym[i].st_info == 18时是调用了一个函数
    {
    //  printf("sym[%d].st_value = %lx\n", i,sym[i].st_value);
    //  printf("sym[%d].st_size = %ld\n", i,sym[i].st_size);
     func_number++; // is FUNC
    }
      
  }
  // printf("func_number = %d\n", func_number);

  // 记录FUNC
  function_info* fc;
  fc = (function_info*)malloc(sizeof(function_info) * func_number);
  for(int i = 0, j = 0; i < symtab_num; i++) 
  {   
    if(ELF64_ST_TYPE(sym[i].st_info) == STT_FUNC)
    {   // is FUNC
      fc[j].addr_start = sym[i].st_value;
      // printf("fc[%d].addr_start = %lx\n", j, fc[j].addr_start);
      fc[j].addr_end = sym[i].st_value + sym[i].st_size; 
      char* str = elf + shdr_str.sh_offset + sym[i].st_name;
      char* name = (char*)malloc(strlen(str) + 1);  // '0'
      strcpy(name, str);
      fc[j].name = name;
      j++;
    }  
  }
  printf("%s\n", ANSI_FMT("ELF_file decode ready!\n", ANSI_FG_GREEN));
  return fc;
}

word_t imm_j(uint32_t i) { return SEXT(BITS(i, 31, 31), 1) << 20 | (BITS(i, 30, 21) << 1) | (BITS(i, 20, 20) << 11) | (BITS(i, 19, 12) << 12); }

int is_call(uint64_t pc, int64_t dnpc,uint32_t inst){    // return index of fc
  uint64_t imm = imm_j(inst);
  uint64_t jump_pc = imm + pc;
  // printf("pc = %lx, dnpc = %lx, jump_pc = %lx\n", pc, dnpc, jump_pc);
  if(BITS(inst,6,0)==0b1100111 || BITS(inst,6,0)==0b1101111) //call:jal x1 或 jalr x1,
  {
    // if(jump_pc == dnpc)
    // {
      int i;
      for(i = 0; i < func_number; i++)
      {
        if(fc[i].addr_start == jump_pc) 
          break;
      }
      if(i < func_number) 
       return i;
    // }
    
  }
  return -1;
}

char* find_func_name(uint64_t addr){    // find func name according to addr
  int i;
  for(i = 0; i < func_number; i++)
  {
    if( (fc[i].addr_start <= addr) && (fc[i].addr_end > addr) ) 
      return fc[i].name;
  }
  return NULL;
}
  
void ftrace(uint64_t pc, uint64_t dnpc, uint32_t inst)
{
  if(BITS(inst,6,0)==0b1100111 || BITS(inst,6,0)==0b1101111)
  {
    // uint64_t imm = imm_j(inst);
    // uint64_t jump_pc = imm + pc;
    
    for(int i = 0; i < func_number; i++)
    {
      if(fc[i].addr_start == dnpc) //判断为call
      {
        assert(ftrace_fp);
        call_times++;
        fprintf(ftrace_fp,"%x: %*ccall [%s@%x]\n", (uint32_t)pc, 2*call_times, ' ', fc[i].name, (uint32_t)fc[i].addr_start);
      }
    }

    if(BITS(inst, 11, 7) == 0b00000)
    {
      assert(ftrace_fp);
      fprintf(ftrace_fp,"%x: %*cret  [%s]\n", (uint32_t)pc, 2*call_times, ' ',find_func_name(pc));
      call_times--;
    }
    
  }
  
}


#endif
/****************************************************************/
