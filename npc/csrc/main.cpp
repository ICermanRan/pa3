#include "verilated_vcd_c.h" //添加VCD头文件
#include "Vtop.h"  //这里因为新建的rtl文件为top.c，所以需要改为Vtop.h即可。
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

vluint64_t main_time = 0;  //initial 仿真时间

double sc_time_stamp()
{
	return main_time;
}

int main(int argc, char** argv, char** env) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
	//VCD波形设置  start
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
	//VCD波形设置  end
  while (sc_time_stamp() < 20 && !contextp->gotFinish()) { 
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	//contextp->timeInc(1);
	tfp->dump(main_time);
	main_time++;
    assert(top->f == (a ^ b));
  }
  delete top;
  tfp->close();	
  delete contextp;
  return 0;
}






