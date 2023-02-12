// #include "include/include.h"
// #include "Vysyx_22050078_npc__Dpi.h"
// #include "Vysyx_22050078_npc.h"
// #include "verilated.h"
// #include "verilated_vcd_c.h"


// //步进和写波形
// void step_and_dump_wave(VerilatedContext* contextp, VerilatedVcdC* tfp, Vysyx_22050078_npc * top)
// {
//   top->eval();
//   contextp->timeInc(1);
//   tfp->dump(contextp->time());
// }

// void sim_init()
// {
  
//     //仿真环境初始化;
// ///////////////////////////////// verilator init: /////////////////////////////////
//   VerilatedContext* contextp = new VerilatedContext; //仿真环境 
//   VerilatedVcdC* tfp = new VerilatedVcdC; //波形
//   Vysyx_22050078_npc * top = new Vysyx_22050078_npc; //单周期dut(例化模块)
//   contextp->traceEverOn(true);    //打开波形 
//   top -> trace(tfp, 0);
//   tfp -> open("waveform.vcd");

//     //对dut的连接,只连接input;init npc status:
// ///////////////////////////////// init npc status: ////////////////////////////////    
//   top->clk = 0;
//   top->rst_n = 0;
//   // top->inst = 0;
//   step_and_dump_wave(contextp, tfp, top); //init reg status,use for difftest_init.
  

//     // //复位
//     // while(rst_time < RESET_TIME)
//     // {
//     //    step_and_dump_wave();
    
//     //    //时钟翻转
//     //    top->clk = !top->clk;
//     //    top->rst = 1;
//     //    top->eval();
//     //    rst_time++;
//     // }

//     // top->rst = 0;

// ///////////////////////////////// verilator doing: ///////////////////////////////
//   //   // 实际进行仿真的代码, loop
//   // while(!contextp->gotFinish())
//   // // while(!contextp->gotFinish() && (sim_time < MAX_SIM_TIME))
//   // {
//   //   // printf("第%ld次\n", sim_time);
//   //   printf("now time is  %ld |||clk is %d \n", contextp->time(), top->clk);
// 	// //时钟翻转
//   //   top->clk = !top->clk; 

//   // #ifdef DIFFTEST_ON
//   //   top->eval();
//   //   if(top->clk && rst_n_sync)
//   //   {
//   //     if(!difftest_check())
//   //     {
//   //       reg_display();
//   //       break;
//   //     }
//   //     difftest_step();
//   //   }
//   // #endif
//   //   step_and_dump_wave(contextp, tfp, top);
//   // }

// ///////////////////////////////// exit: /////////////////////////////////
//   //退出仿真
//   step_and_dump_wave(contextp, tfp, top);
//   tfp->close();
//   delete tfp;
//   delete top;
//   delete contextp;
// }