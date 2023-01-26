/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

static int unsigned_compare(uint64_t num1, uint64_t num2);
static int signed_compare(sword_t num1, sword_t num2);

/****************************************************************/
/************************ ftrace ******************************/
#include <stdio.h>
#include <elf.h>
#include <debug.h>
#ifdef CONFIG_FTRACE
typedef struct{
  char* name;
  uint64_t addr_start;
  uint64_t addr_end;
}function_info;


void ftrace(uint64_t pc, uint64_t dnpc, uint32_t inst);
static bool check_elf(FILE * fp);
function_info* decode_elf(char* elf_file_name);
int is_call(uint64_t pc, int64_t dnpc,uint32_t inst);
char* find_func_name(uint64_t addr);



int func_number = 0;
function_info *fc;
int call_times = 0;
// ftrace
char* ftrace_log = "/home/ran/ysyx/ysyx-workbench/nemu/build/ftrace-log.txt";
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
  printf("ehdr.e_shnum = %d\n",ehdr.e_shnum);//符合elf头中内容
  printf("ehdr.e_shoff = %ld\n",ehdr.e_shoff);//符合elf头中内容
  
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
      printf("section类型为符号表\n");
      shdr_sym = shdr[i];
    }
  }
  Elf64_Shdr shdr_str;
  for(int i = 0; i < ehdr.e_shnum; i++)
  {
    if(shdr[i].sh_type == SHT_STRTAB)
    {
      printf("section类型为字符串表\n");
      shdr_str = shdr[i];
      break;
    }
  }

  // read symtab(读符号表)
  int symtab_num = shdr_sym.sh_size / sizeof(Elf64_Sym);//计算出符号表数目,符合readelf -s看到的Num
  printf("symtab_num = %d\n", symtab_num);
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
      printf("fc[%d].addr_start = %lx\n", j, fc[j].addr_start);
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
  if(BITS(inst,6,0)==0b1100111 || BITS(inst,6,0)==0b1101111) //call:jal x1 或 jalr x1,
  {
    if(jump_pc == dnpc)
    {
      int i;
      for(i = 0; i < func_number; i++)
      {
        if(fc[i].addr_start == jump_pc) 
          break;
      }
      if(i < func_number) 
       return i;
    }
    
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
  // printf("进入ftrace\n");
  int fc_index = is_call(pc, dnpc,inst);
  if(fc_index != -1)
  {
    call_times++;
    // fprintf(ftrace_fp, "%x: %*ccall [%s@%x]\n", (uint32_t)pc, 2*call_times, ' ', fc[fc_index].name, (uint32_t)fc[fc_index].addr_start);
    fprintf(ftrace_fp,"%x: call [%s@%x]\n", (uint32_t)pc, fc[fc_index].name, (uint32_t)fc[fc_index].addr_start);
  }

  if(BITS(inst,6,0)==0b1100111)  
    //对应反汇编文件中每个函数最后一个指令ret
    //实际被扩展为jalr x0,0(x1)或jal，是每个函数的结尾
  {
    if(dnpc == (cpu.gpr[1] & ~1))
    {
      assert(ftrace_fp);
      // fprintf(ftrace_fp, "%x: %*cret  [%s]\n", (uint32_t)pc, 2*call_times, ' ', find_func_name(pc));
      fprintf(ftrace_fp,"%x: ret  [%s]\n", (uint32_t)pc, find_func_name(pc));
      call_times--;
    }
    
  }
  
}


#endif
/****************************************************************/


enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B// none
};  //定义指令type

/*
 这里的*src1表示对指针变量src1的解引用(此src与译码函数里的src不是一个东西)  
 两者的关系是*src1 == *(&src1) == src1(这里是译码函数中的变量)
 所以，下面的宏里，rs表示寄存器编号，宏R表示对应编号寄存器里的值赋给了译码函数中的变量
*/
#define src1R() do { *src1 = R(rs1); } while (0)  //*src1 = cpu.gpr(rs1)
#define src2R() do { *src2 = R(rs2); } while (0)  //*src2 = cpu.gpr(rs2)

/*符号位扩展均扩展为64位，最后返回的结果都是以补码形式看值，因为抽取的立即数在符号位扩展时的扩展规则是不同的(详见宏内)*/
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)            //先12位立即数，再扩展为64位
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)      //先抽取20位立即数，再扩展为64位，再左移12位
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = SEXT( (((BITS(i, 31, 31) << 8 | BITS(i, 19, 12)) << 1 | BITS(i, 20, 20)) << 10 | BITS(i, 30, 21)) << 1, 21); } while(0)
#define immB() do { *imm = SEXT( (((BITS(i, 31, 31) << 1 | BITS(i, 7, 7)) << 6 | BITS(i, 30, 25)) << 4 | BITS(i, 11, 8)) << 1, 13); } while(0)
// #define immB() do { *imm = SEXT( (( BITS(i, 31, 31) << 1 | 1 )) << 1 | 1, 3); } while(0)
// #define immJ() do { *imm = SEXT( (((BITS(i, 31, 31) << 8 | BITS(i, 19, 12)) << 1 | BITS(i, 20, 20)) << 10 | BITS(i, 30, 21)) ,21 ); } while(0)
/*宏BITS 用于位抽取； 宏SEXT 用于符号位扩展*/


//进一步译码，根据传入的指令类型type来进行操作数的译码
//传入这个函数的 *src1、*src2已经是原来函数中变量的地址了，被保存在指针变量里
static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) 
{
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);

  // printf("pc = %lx\n", s->pc);
  // Log("rs1 = %d\n", rs1);
  // Log("rs2 = %d\n", rs2);
  // Log("*src1 = %lu\n", *src1);
  // Log("*src2 = %lu\n", *src2);
  
  //decode_operand会首先统一对目的操作数进行寄存器操作数的译码
  //即调用*dest = rd, 不同的指令类型可以视情况使用dest
  *dest = rd;
  // printf("*dest = %d\n", *dest);

  //为了进一步实现操作数译码和指令译码的解耦, 我们对这些操作数的译码进行了抽象封装
  /*
    定义了src1R()和src2R()两个辅助宏, 用于寄存器的读取结果记录到相应的操作数变量中
    定义了immI、immU()、immS()等辅助宏, 用于从指令中抽取出立即数
  */
  switch (type)
  {
    case TYPE_I: src1R();          immI();  break; //printf("Itype imm = %ld\n",*imm); break;
    case TYPE_U:                   immU();  break; //printf("Utype imm = %ld\n",*imm); break;
    case TYPE_S: src1R(); src2R(); immS();  break; //printf("Stype imm = %ld\n",*imm); break;
    case TYPE_J:                   immJ();  break; //printf("Jtype imm = %lx\n",*imm); break;
    case TYPE_R: src1R(); src2R();          break;
    case TYPE_B: src1R(); src2R(); immB();  break; //printf("Btype imm = %lx\n",*imm); break;
  }
}
/*译码(ID) + 执行(EX)*/
static int decode_exec(Decode *s) {
  int dest = 0;
  unsigned int shamt = 0;
  // word_t read_addr = 0;
  // word_t read_data = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

  // printf("进入译码时的 pc = %0lx\n", s->pc);
  // printf("进入译码时的 dnpc = %0lx\n", s->dnpc);

  vaddr_t t;//暂存jalr中原本的pc+4 = s->dnpc

//定义两个宏：INSTPAT_INST、INSTPAT_MATCH, 在INSTPAT这个宏的内容中调用，简化程序
#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  /* dest:目的操作数  
    src1、src2:两个源操作数  src1 = cpu.gpr(rs1) src2 = cpu.gpr(rs2)
     imm:立即数 */               \
  __VA_ARGS__ ; \
}

  /*模式匹配*/

  /*在INSTPAT中，满足if语句，表示匹配到了某个指令的编码*/         
  /*通过INSTPAT_MATCH宏中，调用decode_operand()函数，得到操作对象*/  
  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);                                                                               //imm = 二进制指令[31:12],从20位扩展到64位，然后左移12位;再与pc相加，写入寄存器x[rd]
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));                                                                         //从地址src1 + imm，读取8个字节的内容，然后写入指定寄存器x[rd]
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2)); 
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10)));                                                                              // R(10) is $a0
              /*add more instructions*/
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);                                                                               //把寄存器 x[rs2]的值和寄存器 x[rs1]的值相加，结果写入 x[rd]。忽略算术溢出。
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = imm + src1);                                                                                //伪指令li的拓展指令之一、伪指令mv的拓展指令之一
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(imm + src1, 31, 0), 32));                                                         //把符号位扩展的立即数的值和 x[rs1]的值相加，将结果截断为 32 位，再进行符号位扩展，最后写入 x[rd]。  
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32)); 
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = imm & src1);                                                                                //把符号位扩展的立即数的值和寄存器 x[rs1]的值进行位与，结果写入 x[rd]。
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);                                                                               //将寄存器 x[rs1]和寄存器 x[rs2]位与的结果写入 x[rd]。
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1 == src2) s->dnpc = s->pc + imm );                                                             //若寄存器 x[rs1]和寄存器 x[rs2]的值相等，把 pc 的值设为当前值加上符号位扩展的偏移 offset。
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 != src2) s->dnpc = s->pc + imm );                                                             //若寄存器 x[rs1]和寄存器 x[rs2]的值不相等，把 pc 的值设为当前值加上符号位扩展的偏移 offset。          
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if( (signed)src1 >= (signed)src2 ) s->dnpc = s->pc + imm );                                           //若寄存器 x[rs1]的值大于等于寄存器 x[rs2]的值（均视为 2 的补码）(即加强制转换)，把 pc 的值设为当前值加上符号位扩展的偏移 offset。
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if(src1>=src2) s->dnpc = s->pc + imm);                                                               //若寄存器 x[rs1]的值大于等于寄存器 x[rs2]的值（均视为无符号数），把 pc 的值设为当前值加上符号位扩展的偏移 offset。
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if( (signed)src1 < (signed)src2  ) s->dnpc = s->pc + imm );                                           //若寄存器 x[rs1]的值小于寄存器 x[rs2]的值（均视为 2 的补码），把 pc 的值设为当前值加上符号位扩展的偏移 offset。
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if( src1 < src2  ) s->dnpc = s->pc + imm );                                                           //若寄存器 x[rs1]的值小于寄存器 x[rs2]的值（均视为无符号数），把pc的值设为当前值加上符号位扩展的偏移 offset。             
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(((signed)BITS(src1, 31, 0) / (signed)BITS(src2, 31, 0)) , 32));                        //用寄存器 x[rs1]的低 32 位除以寄存器 x[rs2]的低 32 位，向零舍入，将这些数视为 2 的补码，把经符号位扩展的 32 位商写入 x[rd]。
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->dnpc, s->dnpc = s->pc + imm);                                                            //跳转指令，跳转地址 = 当前地址 + 处理后的imm;把顺序执行的地址存在寄存器x[1]
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, t = s->dnpc, s->dnpc = ((imm + src1) & ~1), R(dest) = t);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4), 32));                                                               //从地址 x[rs1] + sext(offset)读取四个字节,对于 RV64I，读取的内容要进行符号位扩展，再写入 x[rd]
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + imm, 2), 16));                                                               //从地址 x[rs1] + sign-extend(offset)读取两个字节，经符号位扩展后写入 x[rd]。
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + imm, 1) + SEXT(BITS(s->isa.inst.val, 6, 2), 5)); 
  // INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu , I, read_addr = src1 + imm, read_data = Mr(src1 + imm, 1), R(dest) = Mr(src1 + imm, 1) + SEXT(BITS(s->isa.inst.val, 6, 2), 5));      //从地址 x[rs1] + sign-extend(offset)读取一个字节，经零扩展后写入 x[rd]。
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + imm, 2) + SEXT(BITS(s->isa.inst.val, 6, 2), 5));                                  //从地址 x[rs1] + sign-extend(offset)读取两个字节，经零扩展后写入 x[rd]。(零扩展的技巧)
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm & 0xfffffffffffff000); //
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);                                                                               //把寄存器 x[rs2]和寄存器 x[rs1]的值相乘，乘积写入 x[rd]。忽略算术溢出。
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS(src1 * src2, 31, 0) , 32));                                                       //把寄存器 x[rs2]和寄存器 x[rs1]的值相乘，乘积截为 32 位，符号扩展后写入 x[rd]。忽略算术溢出。
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);                                                                                //将 x[rs1]和符号扩展的 immediate 按位异或，结果写入 x[rd]。
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT(((signed)BITS(src1, 31, 0) % (signed)BITS(src2, 31, 0)) , 32));                        //把 x[rs1]和 x[rs2]的低 32 位都视为 2 的补码(即加强制转换)并把它们相除，向 0 舍入，将余数的符号扩展并写入 x[rd]。
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, BITS(src2, 7, 0)));                                                                 //将 x[rs2]的最低有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, BITS(src2, 31, 0)));                                                                // 将x[rs2]的最低四个有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  // INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, read_addr = src1 + imm, read_data = src1 + imm, Mw(src1 + imm, 1, BITS(src2, 7, 0)));              //将 x[rs2]的最低有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  // INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, read_addr = src1 + imm, Mw(src1 + imm, 4, BITS(src2, 31, 0)));                                     // 将x[rs2]的最低四个有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);                                                                               //把 x[rs1]减去 x[rs2]，结果写入 x[rd]。忽略算术溢出。
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(src1 - src2, 31, 0) , 32));                                                       //把 x[rs1]减去 x[rs2]的结果截为 32 位，符号扩展后写入 x[rd]。忽略算术溢出。
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1, 31, 0) << BITS(src2, 4, 0), 64));
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = src1 << shamt);                                      //把寄存器 x[rs1]左移 shamt 位，空出的位置填零，结果写入 x[rd]。对于 RV32I，仅当 shamt[5]=0时，指令才是有效的。
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = SEXT(BITS(src1 << shamt, 31, 0) , 32) );             //把寄存器 x[rs1]左移 shamt 位，空出的位置填零，结果截为 32 位，进行符号扩展后写入 x[rd]。仅当 shamt[5]=0 时，指令才是有效的。
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = signed_compare( (sword_t)src1, (sword_t)src2));// 
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = unsigned_compare(src1, src2));                                                               //将 x[rs1]和 x[rs2]中的数视为无符号数进行比较。如果 x[rs1]更小，向 x[rd]写入 1，否则写入0。
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = unsigned_compare(src1, imm));                                                                //将 x[rs1]和符号扩展的 immediate 视为无符号数进行比较。如果 x[rs1]更小，向 x[rd]写入 1，否则写入0。
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, BITS(src2, 15, 0)));                                                                //将 x[rs2]的最低两个有效字节存入内存地址 x[rs1]+sign-extend(offset)。
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, shamt = BITS(src2, 4, 0), R(dest) = SEXT(((signed)BITS(src1, 31, 0)) >> shamt , 32) );                //把寄存器 x[rs1]的低 32 位右移 x[rs2]位，空位用 x[rs1][31]填充，结果进行符号扩展后写入x[rd]。x[rs2]的最低五个有效位为移动位数，高位则被忽略
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = SEXT(((signed)BITS(src1, 31, 0)) >> shamt , 32) );   //把寄存器 x[rs1]的低 32 位右移 shamt 位，空位用 x[rs1][31]填充，结果进行符号扩展后写入x[rd]。仅当 shamt[5]=0 时指令有效。
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = (src1 >> src2) );                                                                           //把寄存器 x[rs1]右移 x[rs2]位，空出的位置填零，结果写入 x[rd]。x[rs2]的最低五个有效位（对于 RV64I 是最低六个有效位）代表移动位数，其高位则被忽略。  
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, shamt = BITS(src2, 4, 0), R(dest) = SEXT(((unsigned)BITS(src1, 31, 0)) >> shamt , 32) );//
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = (sword_t)src1 >> shamt);                             //这里用了一个强制类型转换，在右移前把src1从无符号类型转为有符号类型，这样右移就会自动高位补符号位了                         
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = src1 >> shamt);                                      //把寄存器 x[rs1]右移 shamt 位，空出的位置填零，结果写入 x[rd] 
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, shamt = BITS(s->isa.inst.val, 25, 20), R(dest) = SEXT( (BITS(src1, 31, 0) >> shamt) , 32)  );         //把寄存器 x[rs1]截为 32 位再右移 shamt 位，空出的位置填零，结果进行符号扩展后写入 x[rd];带w的是把64位寄存器当成32位看待，高位当成不存在，就变相模拟了32位寄存器
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2); 
 
          
          //inv的规则, 表示"若前面所有的模式匹配规则都无法成功匹配, 则将该指令视为非法指令
          //指令执行错误时，也是这条语句！！！(它内部能修改nemu state)
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();


  IFDEF(CONFIG_FTRACE, ftrace(s->pc,s->dnpc, s->isa.inst.val));


  R(0) = 0; // reset $zero to 0
  

  // printf("退出译码时的 pc = %0lx\n", s->pc);
  // printf("退出译码时的 snpc = %0lx\n", s->snpc);
  // printf("退出译码时的 dnpc = %0lx\n", s->dnpc);
  // printf("退出译码时的 src1 = %0lx\n", src1);
  // printf("退出译码时的 src2 = %0lx\n", src2);
  // printf("退出译码时的 shamt = %d\n", shamt);
  // printf("read_addr = %0lx\n", read_addr);
  // printf("read_data = %0lx\n", read_data);
  // printf("imm = %0lx\n", imm);

  t = 0; //每个jalr的t不同，因此清0
  shamt = 0;//每个shamt不同，因此清0
  // read_addr = 0;
  // read_data = 0;
  return 0;
}


/*取指(IF)*/
int isa_exec_once(Decode *s) {
  //函数inst_fetch()专门负责取指令的工作
  //传入s->snpc的地址
  // s->isa.inst.val = inst_fetch(&s->snpc, 4);//调用inst_fetch，对内存进行一次访问
    
  //把指令记录到s->isa.inst.val中             //还会根据len来更新s->snpc, 从而让s->snpc指向下一条指令
 
  //进入decode_exec()函数，开始译码+执行
  return decode_exec(s);
}

/*无符号数比较函数*/
static int unsigned_compare(uint64_t num1, uint64_t num2)
{
  int result;

  if(num1 < num2)
    result = 1;
  else  
    result = 0;

  return result;
}

/*符号数比较函数*/
static int signed_compare(sword_t num1, sword_t num2)
{
  int result;

  if(num1 < num2)
    result = 1;
  else  
    result = 0;

  return result;
}