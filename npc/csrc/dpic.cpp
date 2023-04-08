#include "include.h"
#include "isa.h"
#include "itrace.h"
#include <getopt.h>
#include "common.h"
#include "debug.h"
#include "verilated_dpi.h"
#include "utils.h"

extern bool rst_n_sync;
extern "C" void check_rst(svBit rst_flag) //其实这个函数没起啥作用
{
  if(rst_flag)
    rst_n_sync = true;
  else
    rst_n_sync = false;
}

extern "C" svBit check_finish(int inst)
{
  if(inst == 0x00100073) //ebreak;
    return 1;
  else
    return 0;
}

extern "C" void rtl_pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask)
{
  // printf("rtl_pmem_write:waddr = 0x%lx,wdata = 0x%lx,wmask = 0x%x\n",waddr,wdata,wmask);
  if((waddr & ~0x7ull) == 0xa00003f8)
  {
    putchar(wdata);
    return;
  }
      
  switch(wmask)
  {
    case 1:   pmem_write(waddr, wdata, 1); break; // 0000_0001, 1byte.
    case 3:   pmem_write(waddr, wdata, 2); break; // 0000_0011, 2byte.
    case 15:  pmem_write(waddr, wdata, 4); break; // 0000_1111, 4byte.
    case 255: pmem_write(waddr, wdata, 8); break; // 1111_1111, 8byte.
    default:  break;
  }
}

extern "C" void rtl_pmem_read(uint64_t raddr, uint64_t *rdata, int ren)
{
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
 
  // if((raddr & ~0x7ull) == 0xa0000048 || (raddr & ~0x7ull) == 0xa000004c)
    if(raddr == 0xa0000048)
    {
      // printf("raddr = %lx\n", raddr);
      uint64_t us = get_time();
      // printf("us = %ld\n", us);
      *rdata = us;
      // *(rdata+4) = us >> 32;
      return ;
    }

  

  
  if(ren && raddr >= PMEM_START && raddr<=PMEM_END)
  {
    // if(raddr == 0xa0000048)
    
      *rdata = pmem_read(raddr, 8);
  }
  else //avoid latch.
   *rdata = 0;
}

extern "C" void rtl_lsu_pmem_read(uint64_t raddr, uint64_t *rdata, int ren)
{
  
  if(ren && raddr >= PMEM_START && raddr<=PMEM_END)
  {
    *rdata = lsu_pmem_read(raddr, 8);
  }
  else //avoid latch.
   *rdata = 0;
}

extern uint64_t *npc_reg;
extern uint64_t npc_pc;
extern uint32_t npc_inst;

//用于获取npc的regs的值，方便在sdb中调用
extern "C" void set_reg_ptr(const svOpenArrayHandle r) 
{
  npc_reg = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  // for(int i = 0; i < 32; i++)
  // {
  //   printf("dut_reg[%d] = %lx\n", i, npc_reg[i]);
  // }
  // printf("set_reg_ptr被调用\n");
}

//用于获取npc的pc值，方便在sdb中调用
extern "C" void diff_read_pc(uint64_t rtl_pc)
{
  npc_pc = rtl_pc;
  // printf("diff_read_pc——>npc_pc = %lx\n", npc_pc);
}

//用于获取npc的指令inst,方便在sdb中调用
extern "C" void sdb_read_inst(uint32_t rtl_inst)
{
  npc_inst = rtl_inst;
}

extern "C" void check_error()
{
  npc_state.halt_pc = npc_pc;
  npc_state.state = NPC_ABORT;
}

extern "C" void check_good_or_bad(svBit a0zero, uint64_t rtl_pc)
{
  npc_state.halt_ret = a0zero;
  npc_state.halt_pc = rtl_pc;
  // printf("npc_state.halt_ret = %d\n", npc_state.halt_ret);
  // printf("npc_state.halt_pc = %x\n", npc_state.halt_pc);
  npc_state.state = NPC_END;
}