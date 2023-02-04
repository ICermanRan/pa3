#include "include/include.h"
#include "Vysyx_22050078_npc__Dpi.h"
#include "Vysyx_22050078_npc.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "stdio.h"
#include "stdlib.h"


// #define NMEM 4096 //inst_memory数组元素个数
// #define MAX_SIM_TIME 50  // 仿真总时钟边沿数
// #define RESET_TIME 5

bool rst_n_sync = false; //read from rtl by dpi-c.


// extern "C" void pmem_read(uint64_t raddr);
// extern "C" void pmem_read(long long int raddr);

//总是读取地址为`raddr & ~0x7u11`的8字节返回给`rdata`

// vluint64_t sim_time = 0; // 用于计数时钟边沿
// vluint64_t rst_time = 0;

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


//获取指令
// uint32_t * ins_temp = NULL;
// uint64_t a = 0;
// uint64_t b = 0;


// extern "C" void pmem_read(long long int raddr) // 内存
// {
//    a = raddr;
//    unsigned int coordinate = ((raddr - 0x80000000)/4 );
//    b = coordinate;
// //   uint32_t rdata = ROM[coordinate];
//    ins_temp = &ROM[coordinate];
// };



// VerilatedContext* contextp = new VerilatedContext; //仿真环境 
// VerilatedVcdC* tfp = new VerilatedVcdC; //波形
// Vysyx_22050078_npc * top = new Vysyx_22050078_npc; //单周期dut(例化模块)


//步进和写波形
void step_and_dump_wave(VerilatedContext* contextp, VerilatedVcdC* tfp, Vysyx_22050078_npc * top)
{
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}


//主函数
int main(int argc, char** argv, char** env) {
    
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
  top->clk = 0;
  top->rst = 0;
  top->inst = 0;
  step_and_dump_wave(contextp, tfp, top); //init reg status,use for difftest_init.
  npc_init(argc, argv);

    // //复位
    // while(rst_time < RESET_TIME)
    // {
    //    step_and_dump_wave();
    
    //    //时钟翻转
    //    top->clk = !top->clk;
    //    top->rst = 1;
    //    top->eval();
    //    rst_time++;
    // }

    // top->rst = 0;

///////////////////////////////// verilator doing: ///////////////////////////////
    // 实际进行仿真的代码, loop
  while(!contextp->gotFinish())
  // while(!contextp->gotFinish() && (sim_time < MAX_SIM_TIME))
  {
    // printf("第%ld次\n", sim_time);
    printf("now time is  %ld |||clk is %d \n", contextp->time(), top->clk);
	//时钟翻转
    top->clk = !top->clk; 

    //Evaluate model
    //获取指令
  #ifdef DIFFTEST_ON
    top->eval();
    if(top->clk && rst_n_sync)
    {
      if(!difftest_check())
      {
        reg_display();
        break;
      }
      difftest_step();
    }
  #endif
    step_and_dump_wave(contextp, tfp, top);
  }

///////////////////////////////// exit: /////////////////////////////////
  //退出仿真
  step_and_dump_wave(contextp, tfp, top);
  tfp->close();
  delete tfp;
  delete top;
  delete contextp;

  return 0;

}