#include "include.h"
#include "common.h"
#include "macro.h"
#include "utils.h"
#include "debug.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/obj_dir/Vysyx_22050078_npc.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"
#include <locale.h>

  //仿真环境初始化;
///////////////////////////////// verilator init: /////////////////////////////////
  VerilatedContext* contextp = new VerilatedContext; //仿真环境
  VerilatedVcdC* tfp = new VerilatedVcdC; //波形
  Vysyx_22050078_npc * top = new Vysyx_22050078_npc; //单周期dut(例化模块)


//函数声明
static inline void all_fail();

#define RESET_TIME 1
#define MAX_INST_TO_PRINT 10

bool rst_n_sync = false; //read from rtl by dpi-c.

// vluint64_t sim_time = 0; // 用于计数时钟边沿
vluint64_t rst_time = 0;

void step_and_dump_wave()
{
  top->eval();
  contextp->timeInc(1);//经过一个时间精度(控制的是波形中的时间精度，即多少时间单位翻转一次)
  tfp->dump(contextp->time());
}


//主函数
int main(int argc, char* argv[]) {
    
///////////////////////////////// 初始化波形文件: //////////////////////////////// 
  contextp->traceEverOn(true);    //打开波形 
  top -> trace(tfp, 0);
  tfp -> open("waveform.vcd");
///////////////////////////////// init npc hardware status: ////////////////////////////////    
  //对dut的连接,只连接input;init npc status:
  printf("连接前, time is %ld\n", contextp->time());
  top->rst_n = 0;
  top->clk = 0;
  step_and_dump_wave(); //init reg status,use for difftest_init.
  printf("连接后, time is %ld, clk is %d, rst_n is %d\n", contextp->time(), top->clk, top->rst_n);
  //复位
  while(rst_time < RESET_TIME)
  {
    //时钟翻转
    printf("复位1 now time is  %ld, clk is %d\n", contextp->time(), top->clk);
    //  printf("\n");
    top->clk = !top->clk;
    step_and_dump_wave();
    printf("复位2 now time is  %ld, clk is %d, rst_n is %d\n", contextp->time(), top->clk, top->rst_n);
    // top->eval();
    rst_time++;
  }
  
  top->rst_n = 1;
  printf("初始化后，time is  %ld, clk = %d, rst_n = %d\n", contextp->time(), top->clk, top->rst_n);
///////////////////////////////// init npc software: ////////////////////////////////   
  npc_init(argc, argv);

 /////////////////////////////////  /* Start engine. */ ////////////////////////////////    
  // engine_start() -> sdb_mainloop()
  // 其中会输出命令提示符, 提示用户输出SDB的命令
  engine_start();

  ///////////////////////////////// exit npc: /////////////////////////////////
  //退出仿真，保存波形文件
  step_and_dump_wave();
  tfp->close();
  delete tfp;
  delete top;
  delete contextp;


  //退出npc software
  return is_exit_status_bad();

}


