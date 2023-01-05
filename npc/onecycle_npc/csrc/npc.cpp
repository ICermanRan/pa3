#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_220578_npc_onecycle__Dpi.h"
#include "svdpi.h"
#include "Vysyx_220578_npc_onecycle.h"
#include "stdio.h"
#include "stdlib.h"


#define NMEM 4096 //inst_memory数组元素个数
#define MAX_SIM_TIME 30  // 仿真总时钟边沿数
#define RESET_TIME 5

// extern "C" void pmem_read(uint64_t raddr);
extern "C" void pmem_read(long long int raddr);

//总是读取地址为`raddr & ~0x7u11`的8字节返回给`rdata`

vluint64_t sim_time = 0; // 用于计数时钟边沿
vluint64_t rst_time = 0;

#define  inst_ebreak     0x00100073

//存储器 指令 rom
static uint32_t ROM[NMEM] = {   
    0x00108113, //0000000 00001 00001 000 00010 00100 11, //addi x2,x1,0x001(x2 = imm + x1)
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    inst_ebreak  //0000000 00001 00000 000 00000 11100 11//ebreak

};


//获取指令
uint32_t * ins_temp = NULL;
uint64_t a = 0;
uint64_t b = 0;
// extern "C" void pmem_read(uint64_t raddr) // 内存
// {
//    a = raddr;
//    unsigned int coordinate = ((raddr - 0x80000000)/4 );
//    b = coordinate;
// //   uint32_t rdata = ROM[coordinate];
//    ins_temp = &ROM[coordinate];
// };

extern "C" void pmem_read(long long int raddr) // 内存
{
   a = raddr;
   unsigned int coordinate = ((raddr - 0x80000000)/4 );
   b = coordinate;
//   uint32_t rdata = ROM[coordinate];
   ins_temp = &ROM[coordinate];
};



VerilatedContext* contextp = NULL;  //仿真环境 
VerilatedVcdC* tfp = NULL;  //  波形
static Vysyx_220578_npc_onecycle *top; //单周期dut(例化模块)

//对dut的连接 只连接input
void connect_dut()
{
    top->clk = 0;
    top->rst = 0;
    top->inst = 0;
    
    top->eval();
}


//步进和写波形
void step_and_dump_wave(){
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

//仿真初始化
void sim_init()
{
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vysyx_220578_npc_onecycle;
    contextp->traceEverOn(true);    //打开 波形 
    top -> trace(tfp, 20);
    tfp -> open("waveform.vcd");
}

//退出仿真
void sim_exit()
{
    step_and_dump_wave();
    tfp->close();
}

//主函数
int main(int argc, char** argv, char** env) {
    
    //仿真环境初始化
    sim_init();

    //对dut的连接;
    connect_dut();

    //复位
    while(rst_time < RESET_TIME)
    {
       step_and_dump_wave();
    
       //时钟翻转
       top->clk = !top->clk;
       top->rst = 1;
       top->eval();
       rst_time++;

    }

    top->rst = 0;
    //实际进行仿真的代码, loop
	// while(!contextp->gotFinish())
    while(!contextp->gotFinish() && (sim_time < MAX_SIM_TIME))
	{
        printf("第%ld次\n", sim_time);
        printf("now time is  %ld |||clk is %d \n", contextp->time(), top->clk);
		step_and_dump_wave();

        //时钟翻转
        top->clk = !top->clk; 

        //Evaluate model
        //获取指令
        pmem_read(top->inst_addr_cpu2mem);
        printf("传入的pc = %lx\n", a);
        printf("数组坐标 = %lx\n", b);
        printf("实际从rom读到的数据为 = %x\n", *ins_temp);
        // printf("数组元素地址 = %p\n", ins_temp);
       

        //printf("传入的pc = %llx\n", a);
        if( *ins_temp == inst_ebreak )
        {
            break;
        }
        top->inst = *ins_temp;
       // top->inst = pmem_read(top->inst_addr_cpu2mem);
        
        printf("\n");

        top->eval();
        sim_time++;
        
	}

    //退出仿真
    sim_exit();

}