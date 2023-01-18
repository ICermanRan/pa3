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

/*定义iring_buf*/
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


static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {

#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

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
static void exec_once(Decode *s, vaddr_t pc) {
                    //s存放在执行一条指令过程中所需的信息, 包括指令的PC, 下一条指令的PC等
  s->pc = pc;       //当前pc
  s->snpc = pc;     //snpc先赋值为当前的pc

  s->isa.inst.val = vaddr_ifetch(s->snpc, 4);  //为了在iringbuf功能把错误指令打出来，把isa_exec_once(s)放在
                                              //构建指令后面，并且在isa_exec_once(s)中屏蔽掉s->isa.inst.val = inst_fetch
                                              //放在这里提前调用
  #ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  // printf("000 %s\n", s->logbuf);
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);  //这里用于把pc:存入s->logbuf,并且去掉了最开始未定义的乱码pc
  printf("111 %s\n", s->logbuf);
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

#ifdef CONFIG_ITRACE
void show_iringbuf()
{
  
  for(int i = 0; i <= tot; i++) 
  {
    
    if(i == now - 1)
      printf("--> %s\n", iring_buf[i]);
    else 
      printf("    %s\n", iring_buf[i]);
  }
}
#endif

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
