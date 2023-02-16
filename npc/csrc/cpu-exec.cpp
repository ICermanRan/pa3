#include "Vysyx_22050078_npc__Dpi.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/obj_dir/Vysyx_22050078_npc.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include "include.h"
#include "common.h"
#include "macro.h"
#include "itrace.h"
#include <locale.h>

  //仿真环境初始化;
///////////////////////////////// verilator init: /////////////////////////////////
extern  VerilatedContext* contextp; //仿真环境
extern  VerilatedVcdC* tfp; //波形
extern  Vysyx_22050078_npc * top; //单周期dut(例化模块)



static inline void all_fail();
#define MAX_INST_TO_PRINT 10

uint64_t g_nr_guest_inst = 0;
// static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

static void trace_and_difftest() {

// #ifdef CONFIG_ITRACE_COND
//   if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
// #endif
//   if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
//   IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

/*check watchpoint*/
 #ifdef CONFIG_WATCHPOINT
  int change = test_change();
  
  if(change == 1) //发生了变化，要暂停
    {
      npc_state.state = NPC_STOP;
      printf("监视点已被触发\n");
      return ; //返回到sdb_mainloop()循环中等待用户的命令.
    }
 #endif
}


extern uint64_t npc_pc;
uint32_t npc_inst;

/*exec_once()函数覆盖了指令周期的所有阶段: 取指, 译码, 执行, 更新PC*/
/*模拟了cpu的工作方式*/
static void exec_once() {
  
  top->clk = !top->clk; 
  top->eval();
  step_and_dump_wave();

  top->clk = !top->clk; 
  top->eval();
  step_and_dump_wave();

  itrace(npc_pc, npc_inst);
}



static void execute(uint64_t n) {
  for (;n > 0; n --)
  {
   
    exec_once(); 
    g_nr_guest_inst ++;     //一个用于记录客户指令的计数器，自加1
    
    /*检查NPC的状态是否为NPC_RUNNING*/
    /*若是, 则继续执行下一条指令, 否则则退出执行指令的循环.*/
     if (npc_state.state != NPC_RUNNING) 
      break;

    /*下面的代码与trace和difftest相关*/
    //  printf("传递给trace_and_difftest 的cpu.pc的值 = %0lx\n", cpu.pc);
    trace_and_difftest();
     
    // IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
//   IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
// #define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
//   Log("host time spent = " NUMBERIC_FMT " us", g_timer);
//   Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
//   if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
//   else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
  Log("npc quit");
  printf("npc quit\n");
}

//报错时就会调用这个函数
void assert_fail_msg()  
{
  all_fail();
  statistic();
}

static inline void all_fail()
{
   #ifdef CONFIG_ITRACE
    // show_iringbuf();
   #endif
    void reg_display();
}




/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);   //判断传入的要单步执行的步数，不能大于10
  switch (npc_state.state) {
    case NPC_ABORT:
      all_fail();
    case NPC_END: 
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  // uint64_t timer_start = get_time();

  execute(n);

  // uint64_t timer_end = get_time();
  // g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;
    
    case NPC_ABORT:  case NPC_END: 
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}