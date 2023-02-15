#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/include.h"
#include "verilated_dpi.h"

extern bool rst_n_sync;
extern "C" void check_rst(svBit rst_flag)
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
  // printf("waddr = 0x%lx,wdata = 0x%lx,wmask = 0x%x\n",waddr,wdata,wmask);
  
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
  // printf("raddr = %08lx, rdata = %016lx, ren = %d,\n",raddr, *rdata, ren);
  // printf("result = %d\n", ren && raddr >= PMEM_START && raddr<=PMEM_END);
  if(ren && raddr >= PMEM_START && raddr<=PMEM_END)
  {
    *rdata = pmem_read(raddr, 8);
  }
  else //avoid latch.
   *rdata = 0;
}

extern uint64_t *npc_reg;
extern uint64_t npc_pc;

//用于获取npc的regs的值，方便在sdb中调用
extern "C" void set_reg_ptr(const svOpenArrayHandle r) 
{
  npc_reg = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

//用于获取npc的pc值，方便在sdb中调用
extern "C" void diff_read_pc(uint64_t rtl_pc)
{
  npc_pc = rtl_pc;
}