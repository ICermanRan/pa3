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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include </home/ran/ysyx/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>
#include </home/ran/ysyx/ysyx-workbench/nemu/include/cpu/ifetch.h>
#include </home/ran/ysyx/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

/****************************************************************/
/************************ 定义iring_buf ************************/
#ifdef CONFIG_ITRACE
int now, tot;
char iring_buf[16][64];
int overburden = 0; 
int iring_tail = 0;
int first_inst = 1;
#define IRINGBUF_SIZE 16
#define num_of_buf (sizeof(iring_buf) / sizeof(iring_buf[0])) 
#endif
//数组的长度 = 数组所占的大小/单个数组元素所占的大小

#ifdef CONFIG_ITRACE
void show_iringbuf()
{
  Log_red("-----------------iringbuf---------------\n");
  for(int i = 0; i <= tot; i++) 
  {
    
    if(i == now - 1)
      printf("--> %s\n", iring_buf[i]);
    else 
      printf("    %s\n", iring_buf[i]);
  }
  Log_red("----------------------------------------\n");
}
#endif

/****************************************************************/
/************************ ftrace ******************************/
#include <stdio.h>
#include <elf.h>


#ifdef CONFIG_FTRACE
typedef struct{
  char* name;
  uint64_t addr_start;
  uint64_t addr_end;
}function_info;
int func_number = 0;
function_info *fc;
int call_times = 0;
// ftrace
char* ftrace_log = "/home/ran/ysyx/ysyx-workbench/nemu/build/ftrace-log.txt";
FILE* ftrace_fp;

function_info* decode_elf(char* elf_file_name)
{
  assert(elf_file_name != NULL);
  // Log_magenta("进入decode_elf");

  FILE *fp;
  // get elf size
  fp = fopen(elf_file_name, "r");

    // if(check_elf(fp) == 0)  //初步检查是否是elf文件
    // assert(0);

  fseek(fp, 0L, SEEK_END);
  int elf_size = ftell(fp);
  // copy elf file to char *
  char elf[elf_size];
  fseek(fp, 0, SEEK_SET);
  int ret = fread(&elf, elf_size, 1, fp);
  // printf("ret = %d\n", ret);
  assert(ret == 1);
  fclose(fp);
  // read elf header table
  Elf64_Ehdr ehdr;
  memcpy(&ehdr, elf, sizeof(Elf64_Ehdr));
  // read section header table
  Elf64_Shdr shdr[ehdr.e_shnum];
  memcpy(&shdr, elf + ehdr.e_shoff, sizeof(Elf64_Shdr)*ehdr.e_shnum);
  // find the offset of strtab and symtab
  Elf64_Shdr shdr_sym;
  for(int i = 0; i < ehdr.e_shnum; i++) {
    if(shdr[i].sh_type == SHT_SYMTAB) shdr_sym = shdr[i];
  }
  Elf64_Shdr shdr_str;
  for(int i = 0; i < ehdr.e_shnum; i++) {
    if(shdr[i].sh_type == SHT_STRTAB) {
      shdr_str = shdr[i];
      break;
    }
  }
  // read symtab
  int symtab_num = shdr_sym.sh_size / sizeof(Elf64_Sym);
  Elf64_Sym sym[symtab_num];
  memcpy(&sym, elf + shdr_sym.sh_offset, shdr_sym.sh_size);
  // find FUNC in symtab, find the name of FUNC and the addr of FUNC
  // 计算有多少个FUNC
  for(int i = 0; i < symtab_num; i++) {   
    if(sym[i].st_info == 18)  func_number++; // is FUNC
  }
  // 记录FUNC
  function_info* fc;
  fc = (function_info*)malloc(sizeof(function_info) * func_number);
  for(int i = 0, j = 0; i < symtab_num; i++) {   
    if(sym[i].st_info == 18){   // is FUNC
      fc[j].addr_start = sym[i].st_value;
      fc[j].addr_end = sym[i].st_value + sym[i].st_size; 
      char* str = elf + shdr_str.sh_offset + sym[i].st_name;
      char* name = (char*)malloc(strlen(str) + 1);  // '0'
      strcpy(name, str);
      fc[j].name = name;
      j++;
    }  
  }
  return fc;
}
// static bool check_elf(FILE * fp)
// {

//   //int fseek(FILE *stream, long int offset, int whence)
//   //函数设置流stream的文件位置为给定的偏移 offset，参数 offset 意味着从给定的 whence 位置偏移的字节数
//   //SEEK_SET	0	/* Seek from beginning of file.  */
//   //SEEK_CUR	1	/* Seek from current position.  */
//   //SEEK_END	2 /* Seek from end of file.  */
  
//   fseek(fp, 0, SEEK_SET);/* 查找文件的开头 */
//   Ehdr ehdr;//定义ELF文件头(描述整个文件的组织结构)
  
//   //size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//   //函数从给定流 stream 读取数据到 ptr 所指向的数组中。
//   /*
//     ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
//     size -- 这是要读取的每个元素的大小，以字节为单位。
//     nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
//     stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
//   */
//   int ret = fread(&ehdr, sizeof(Ehdr), 1, fp);//从fp读取数据存储到ehdr
//   assert(ret == 1);//如果ret !=1,则终止程序
  
//   //判断elf文件类型
//   //e_ident前4个字节是ELF的Magic Number 
//   //e_ident 字段前四位为文件标识，一般为“\x7fELF”，通过这四位，可以查看该文件是否为ELF文件
//   if(ehdr.e_ident[0] != 0x7f || ehdr.e_ident[1] != 'E' || ehdr.e_ident[2] != 'L' || ehdr.e_ident[3] != 'F')
//   {
//     Log_red("Load a non-ELF file, error!");
//     return 0;
//   }

//   //判断ELF文件是32位还是64位(肯定是64位)
//   if(ehdr.e_ident[4] != MUXDEF(CONFIG_ISA64, ELFCLASS64, ELFCLASS32))
//   {
//     Log_red("Elf refers to not suppored ISA, elf is ignored");
//     return 0;
//   }

//   //第6个字节指明了数据的编码方式
//   //little endian：将低序字节存储在起始地址（低位编址）
//   if(ehdr.e_ident[5] != ELFDATA2LSB)
//   {
//     Log_red("Not supported little edian, elf is ignored");
//     return 0;
//   }

//   //ehdr.e_shoff表示section header table在文件中的 offset，如果这个 table 不存在，则值为0。
//   //根据这个变量能找到节头表
//   if(ehdr.e_shoff == 0) 
//   {
//     Log_red("No Sections header table. Elf is ignored.");
//     return 0;
//   }

//   //ehdr.e_shnum表示节头表中header的数目
//   //如果文件没有节头表, e_shnum的值为0。
//   //e_shentsize乘以e_shnum，就得到了整个section header table的大小。
//   if(!ehdr.e_shnum) 
//   {
//     Log_red("Too many sections. Elf is ignored.");
//     return 0;
//   }

//   return 1;
// }


// function_info * decode_elf(char* elf_file)
// {
//   assert(elf_file != NULL);
  
//   // Log_magenta("进入load_elf");

//   //get elf size
//   FILE * fp;
//   fp = fopen(elf_file, "r");//rb:读方式打开一个二进制文件，不允许写数据，文件必须存在


//   // if(check_elf(fp) == 0)  //初步检查是否是elf文件
//   //   assert(0);

//   fseek(fp, 0, SEEK_END);//fp移动到elf文件末尾
//   int elf_size = ftell(fp);//该函数用于得到文件位置指针fp当前位置相对于文件首的偏移字节数

//   //copy elf file to char *
//   printf("copy elf file to char\n");
//   char elf[elf_size];
//   fseek(fp, 0, SEEK_SET);//fp移动到elf文件开始
//   int ret = fread(&elf, elf_size, 1, fp);//将整个elf文件内容复制到char elf
//   assert(ret == 1);

//   fclose(fp);

//   // read elf header table(读ELF头)
//   Elf64_Ehdr ehdr;//定义ELF头(描述整个文件的组织结构)
//   memcpy(&ehdr, elf, sizeof(Elf64_Ehdr));
//       // fseek(fp, 0, SEEK_SET);/*回到文件的开头*/
//       // int ret = fread(&ehdr, sizeof(Ehdr), 1, fp);//从fp读取数据存储到ehdr
//       // assert(ret == 1);//如果ret !=1,则终止程序

//   // read section header table(读节头表)
//   // ehdr.e_shnum表示节头表中共有多少个节
//   Elf64_Shdr shdr[ehdr.e_shnum];//定义ELF文件节头表(section header table)
//   memcpy(&shdr, elf + ehdr.e_shoff, sizeof(Elf64_Shdr)*ehdr.e_shnum);//从elf数组起始+节头表对应偏置，复制所有节大小的内容到shdr
  

//   // find the offset of strtab and symtab(解析节头表，找到符号表和字符串表)
//   Elf64_Shdr shdr_sym;
//   for(int i = 0; i < ehdr.e_shnum; i++)
//   {
//     if(shdr[i].sh_type == SHT_SYMTAB)
//     {
//       printf("section类型为符号表\n");
//       shdr_sym = shdr[i];
//       break;
//     }
//   }

//   Elf64_Shdr shdr_str;
//   for(int i = 0; i < ehdr.e_shnum; i++)
//   {
//     if(shdr[i].sh_type == SHT_STRTAB)
//     {
//       printf("section类型为字符串表\n");
//       shdr_str = shdr[i];
//       break;
//     }
//   }

//   // read symtab(读符号表)
//   int symtab_num = shdr_sym.sh_size / sizeof(Elf64_Sym);//计算出符号表数目
//   Elf64_Sym sym[symtab_num];//定义‘符号表结构体’数组
//   memcpy(&sym, elf + shdr_sym.sh_offset, shdr_sym.sh_size);

//   // find FUNC in symtab, find the name of FUNC and the addr of FUNC
//   //计算有多少个FUNC
//   for(int i = 0; i < symtab_num; i++)
//   {
//     // if(sym[i].st_info == STT_FUNC)
//     if(sym[i].st_info == 18)
//       func_number++;
//   }
//   //记录FUNC
//   function_info* fc_decode;
//   fc_decode = (function_info*)malloc(sizeof(function_info) * func_number);
//   for(int i = 0, j = 0; i < symtab_num; i++)
//   {
//     // if(sym[i].st_info == STT_FUNC)
//     if(sym[i].st_info == 18)
//     {
//       fc_decode[j].addr_start = sym[i].st_value;
//       fc_decode[j].addr_end = sym[i].st_value + sym[i].st_size;
//       char * str = elf + shdr_str.sh_offset + sym[i].st_name;
//       char * name = (char*)malloc(strlen(str) + 1); //'0'
//       strcpy(name, str);
//       fc_decode[j].name = name;
//       j++;
//     }
//   }
//   Log_magenta("ELF_file = %s decoding ready!\n", elf_file);
//   return fc_decode;

 
// } 

#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
word_t immj(uint32_t i) { return SEXT(BITS(i, 31, 31), 1) << 20 | (BITS(i, 30, 21) << 1) | (BITS(i, 20, 20) << 11) | (BITS(i, 19, 12) << 12); }

int is_call(uint64_t pc, uint32_t inst){    // return index of fc
  uint64_t imm = immj(inst);
  uint64_t jump_pc = imm + pc;
  if((inst & 0xfff) == 0x0ef){
    int i;
    for(i = 0; i < func_number; i++){
      if(fc[i].addr_start == jump_pc) break;
    }
    if(i < func_number) return i;
  }
  return -1;
}

char* find_func_name(uint64_t addr){    // find func name according to addr
  int i;
  for(i = 0; i < func_number; i++){
    if(fc[i].addr_start <= addr && fc[i].addr_end > addr) return fc[i].name;
  }
  return NULL;
}

void ftrace(uint64_t pc, uint32_t inst){
  // printf("进入ftrace\n");
  if(inst == 0x00008067){
    assert(ftrace_fp);
    // fprintf(ftrace_fp, "%x: %*cret  [%s]\n", (uint32_t)pc, 2*call_times, ' ', find_func_name(cpu.gpr[1]));
    printf(ftrace_fp,"%x: ret  [%s]\n", (uint32_t)pc, find_func_name(cpu.gpr[1]));
    call_times--;
  }
  int fc_index = is_call(pc, inst);
  if(fc_index != -1){
    call_times++;
    // fprintf(ftrace_fp, "%x: %*ccall [%s@%x]\n", (uint32_t)pc, 2*call_times, ' ', fc[fc_index].name, (uint32_t)fc[fc_index].addr_start);
    printf(ftrace_fp,"%x: call [%s@%x]\n", (uint32_t)pc, fc[fc_index].name, (uint32_t)fc[fc_index].addr_start);
  }
}
// int is_call(uint64_t pc, uint32_t inst){    // return index of function_info
//   uint64_t imm = immj(inst);
//   uint64_t jump_pc = imm + pc;
//   if((inst & 0xfff) == 0x0ef){
//     int i;
//     for(i = 0; i < func_number; i++){
//       if(fc[i].addr_start == jump_pc) break;
//     }
//     if(i < func_number) return i;
//   }
//   return -1;
// }

// char* find_func_name(uint64_t addr){    // find func name according to addr
//   int i;
//   for(i = 0; i < func_number; i++)
//   {
//     if(fc[i].addr_start <= addr && fc[i].addr_end > addr) 
//       return fc[i].name;
//   }
//   return NULL;
// }

// void ftrace(uint64_t pc, uint32_t inst){
//   printf("进入ftrace\n");
//   if(inst == 0x00008067)  //对应反汇编中指令ret(实际被扩展为jalr)，是每个函数的结尾
//   {
//     assert(ftrace_fp);
//     fprintf(ftrace_fp, "%x: %*cret  [%s]\n", (uint32_t)pc, 2*call_times, ' ', find_func_name(cpu.gpr[1]));
//     call_times--;
//   }
//   int fc_index = is_call(pc, inst);
//   if(fc_index != -1)
//   {
//     call_times++;
//     fprintf(ftrace_fp, "%x: %*ccall [%s@%x]\n", (uint32_t)pc, 2*call_times, ' ', fc[fc_index].name, (uint32_t)fc[fc_index].addr_start);
//   }
// }
#endif


/**************************************************************/
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {

#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  IFDEF(CONFIG_FTRACE, ftrace(_this->pc, _this->isa.inst.val));

/*check watchpoint*/
 #ifdef CONFIG_WATCHPOINT
  int change = test_change();
  
  if(change == 1) //发生了变化，要暂停
    {
      nemu_state.state = NEMU_STOP;
      printf("监视点已被触发\n");
      return ; //返回到sdb_mainloop()循环中等待用户的命令.
    }
 #endif
}

/*exec_once()函数覆盖了指令周期的所有阶段: 取指, 译码, 执行, 更新PC*/
/*模拟了cpu的工作方式*/
static void exec_once(Decode *s, vaddr_t pc) 
{
                    //s存放在执行一条指令过程中所需的信息, 包括指令的PC, 下一条指令的PC等
  s->pc = pc;       //当前pc
  s->snpc = pc;     //snpc先赋值为当前的pc

  
  s->isa.inst.val = inst_fetch(&s->snpc, 4); //为了在iringbuf功能把错误指令打出来，把isa_exec_once(s)放在
                                             //构建指令后面，并且在isa_exec_once(s)中屏蔽掉s->isa.inst.val = inst_fetch
                                             //放在这里提前调用
  //s->isa.inst.val = paddr_read(s->snpc, 4); //不用paddr的原因：构建反汇编内容是依赖snpc的，inst_fetch中对
  // s->snpc += 4;                            //s->snpc进行了操作，而单纯的paddr则不行
  #ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  // printf("000 %s\n", s->logbuf);
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);  //这里用于把pc:存入s->logbuf,并且去掉了最开始未定义的乱码pc
  // printf("111 %s\n", s->logbuf);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  // printf("222 %s\n", s->logbuf);
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, "%02x ", inst[i]);
  } //循环的作用是把指令中的内存给翻译出来存入s->logbuf
  // printf("333 %s\n", s->logbuf);
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  // printf("444 %s\n", s->logbuf);  
  memset(p, ' ', space_len);  //从循环结束到这一句结束的作用，是把指令内容翻译出来，存入iringbuf
                              //例如addi        sp, sp, -4
  // printf("555 %s\n", s->logbuf); 
  p += space_len;

  // void disassemble：把0x0000000080000000的乱码翻译成反汇编内容(从乱码——>字符串)
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);

  //存入iring_buf
  strcpy(iring_buf[now], s->logbuf);
  now = (now + 1) % num_of_buf;
  if(now > tot) tot = now;
  #endif

  
  isa_exec_once(s); //它会随着取指的过程修改s->snpc的值, 
                    //使得从isa_exec_once()返回后s->snpc正好为下一条指令的PC. 
  cpu.pc = s->dnpc; //下一条指令的pc(动态)
  /*下面的代码与trace相关*/
  /*当用sdb 单步执行si功能的时候，这里会把当前的:地址、指令、指令名称、操作数 等打印出来*/

  /*ITRACE*/
// #ifdef CONFIG_ITRACE
//   // vaddr_t tmp = pc;
//   char *p = s->logbuf;
//   p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);  //这里用于把pc存入s->logbuf
//   int ilen = s->snpc - s->pc;
//   int i;
//   uint8_t *inst = (uint8_t *)&s->isa.inst.val;
//   for (i = ilen - 1; i >= 0; i --) {
//     p += snprintf(p, 4, "%02x ", inst[i]);
//   } //循环的作用是把指令中的内存给翻译出来存入s->logbuf
//   int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
//   int space_len = ilen_max - ilen;
//   if (space_len < 0) space_len = 0;
//   space_len = space_len * 3 + 1;
    
//   memset(p, ' ', space_len);  //从循环结束到这一句结束的作用，是把指令内容翻译出来，存入iringbuf
//                               //例如addi        sp, sp, -4
//   p += space_len;

  // void disassemble：把0x0000000080000000的乱码翻译成反汇编内容(从乱码——>字符串)
  // void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  // disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
  //     MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);

//   //存入iring_buf
//   strcpy(iring_buf[now],s->logbuf);
//   now=(now+1)%num_of_buf;
//   if(now>tot) tot=now;
 
// #endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --)
  {
   
    exec_once(&s, cpu.pc); 
    g_nr_guest_inst ++;     //一个用于记录客户指令的计数器，自加1

    /*下面的代码与trace和difftest相关*/
    trace_and_difftest(&s, cpu.pc);
    
    
    /*检查NEMU的状态是否为NEMU_RUNNING*/
    /*若是, 则继续执行下一条指令, 否则则退出执行指令的循环.*/
     if (nemu_state.state != NEMU_RUNNING) 
      break;
     
    IFDEF(CONFIG_DEVICE, device_update());
  }
}



static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

static inline void all_fail()
{
   #ifdef CONFIG_ITRACE
    show_iringbuf();
   #endif
  isa_reg_display();
}

//报错时就会调用这个函数
void assert_fail_msg()  
{
  all_fail();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);   //判断传入的要单步执行的步数，不能大于10
  switch (nemu_state.state) {
    case NEMU_ABORT:
    case NEMU_END: 
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    
    case NEMU_ABORT:  case NEMU_END: 
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
