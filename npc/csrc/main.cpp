<<<<<<< HEAD
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/include.h"
#include "Vysyx_22050078_npc__Dpi.h"
#include "Vysyx_22050078_npc.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"


// #define NMEM 4096 //inst_memory数组元素个数
#define MAX_SIM_TIME 50  // 仿真总时钟边沿数
#define RESET_TIME 2

bool rst_n_sync = false; //read from rtl by dpi-c.




vluint64_t sim_time = 0; // 用于计数时钟边沿
vluint64_t rst_time = 0;

// #define  inst_ebreak     0x00100073

// //存储器 指令 rom
// static uint32_t ROM[NMEM] = {   
//     0x00108113, //0000000 00001 00001 000 00010 00100 11, //addi x2,x1,0x001(x2 = imm + x1)
//     0x00000000,
//     0x00000000,
//     0x00000000,
//     0x00000000,
//     inst_ebreak  //0000000 00001 00000 000 00000 11100 11//ebreak

// };



// extern "C" void pmem_read(long long int raddr) // 内存
// {
//    a = raddr;
//    unsigned int coordinate = ((raddr - 0x80000000)/4 );
//    b = coordinate;
// //   uint32_t rdata = ROM[coordinate];
//    ins_temp = &ROM[coordinate];
// };


void step_and_dump_wave(VerilatedContext* contextp,VerilatedVcdC* tfp, Vysyx_22050078_npc *top)
{
  top->eval();
  contextp->timeInc(1);//经过一个时间精度
=======
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
>>>>>>> test
  tfp->dump(contextp->time());
}


<<<<<<< HEAD
//主函数
int main(int argc, char* argv[]) {
    
  // printf("%s %s\n",argv[0],argv[1],argv[2]);
  // npc_init(argc, argv);

  // /* Start engine. */
  // // engine_start() -> sdb_mainloop()
  // // 其中会输出命令提示符, 提示用户输出SDB的命令
  // engine_start();




  //仿真环境初始化;
///////////////////////////////// verilator init: /////////////////////////////////
  VerilatedContext* contextp = new VerilatedContext; //仿真环境 
  VerilatedVcdC* tfp = new VerilatedVcdC; //波形
  Vysyx_22050078_npc * top = new Vysyx_22050078_npc; //单周期dut(例化模块)
  contextp->traceEverOn(true);    //打开波形 
  top -> trace(tfp, 0);
  tfp -> open("waveform.vcd");

    //对dut的连接,只连接input;init npc status:
///////////////////////////////// init npc status: ////////////////////////////////    
  top->rst_n = 0;
  top->clk = 0;
  // top->inst = 0;
  step_and_dump_wave(contextp, tfp, top); //init reg status,use for difftest_init.
  npc_init(argc, argv);

    //复位
    while(rst_time < RESET_TIME)
    {
       //时钟翻转
       printf("now time is  %ld, clk is %d\n", contextp->time(), top->clk);
       printf("\n");
       top->clk = !top->clk;
       step_and_dump_wave(contextp, tfp, top);
       top->eval();
       rst_time++;
    }

    top->rst_n = 1;

///////////////////////////////// verilator doing: ///////////////////////////////
    // 实际进行仿真的代码, loop
  while(!contextp->gotFinish()) //一直到contextp仿真完成才退出
  // while(!contextp->gotFinish() && (sim_time < MAX_SIM_TIME))
  {
    // printf("第%ld次\n", sim_time);
    printf("now time is  %ld, clk is %d\n", contextp->time(), top->clk);
    printf("\n");
	//时钟翻转
    top->clk = !top->clk; 
    top->eval(); 
  // #ifdef DIFFTEST_ON
  //   top->eval();
  //   if(top->clk && rst_n_sync)
  //   {
  //     if(!difftest_check())
  //     {
  //       reg_display();
  //       break;
  //     }
  //     difftest_step();
  //   }
  // #endif
    step_and_dump_wave(contextp, tfp, top);
    sim_time++;
  }

///////////////////////////////// exit: /////////////////////////////////
  //退出仿真
  step_and_dump_wave(contextp, tfp, top);
=======



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
    printf("复位2 now time is  %ld, clk is %d\n", contextp->time(), top->clk);
    // top->eval();
    rst_time++;
  }
  
  top->rst_n = 1;
  printf("初始化后，time is  %ld, rst_n = %d, clk = %d\n", contextp->time(), top->rst_n, top->clk);
///////////////////////////////// init npc software: ////////////////////////////////   
  npc_init(argc, argv);

 /////////////////////////////////  /* Start engine. */ ////////////////////////////////    
  // engine_start() -> sdb_mainloop()
  // 其中会输出命令提示符, 提示用户输出SDB的命令
  engine_start();

  ///////////////////////////////// exit npc: /////////////////////////////////
  //退出仿真，保存波形文件
  step_and_dump_wave();
>>>>>>> test
  tfp->close();
  delete tfp;
  delete top;
  delete contextp;
<<<<<<< HEAD
  return 0;

}
=======

  //退出npc software
  return is_exit_status_bad();

}






>>>>>>> test
