#include "include.h"
#include "debug.h"
#include "utils.h"
#include "host.h"

uint8_t pmem[PMEM_MSIZE] = {};

/* convert the guest physical address in the guest program to host virtual address in NEMU */
//将客户程序的物理地址转化成nemu中主机的虚拟地址
uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - PMEM_START; }

/* convert the host virtual address in NEMU to guest physical address in the guest program */
//将nemu中主机的虚拟地址转化成客户程序中的物理地址
uint64_t host_to_guest(uint8_t *haddr) { return haddr - pmem + PMEM_START; }

void pmem_write(uint64_t addr, uint64_t data, int len) 
{
  //  uint8_t * paddr = guest_to_host(addr);
  //  switch(len)
  //   {
  //    case 1: *(uint8_t  *)paddr = data; return;
  //    case 2: *(uint16_t *)paddr = data; return;
  //    case 4: *(uint32_t *)paddr = data; return;
  //    case 8: *(uint64_t *)paddr = data; return;
  //   }
  // #ifdef CONFIG_MTRACE
  //   Log("MTRACE_write:addr = %lx, len = %d, data = %lu",addr, len, data);
  //   // printf("waddr & ~0x7ull = %llx\n", addr & ~0x7ull);
  // #endif
  host_write(guest_to_host(addr), len, data);
}

uint64_t pmem_read(uint64_t addr, int len) 
{
  uint8_t * paddr = (uint8_t*) guest_to_host(addr);  
  switch (len) {
    case 1: return *(uint8_t  *)paddr;
    case 2: return *(uint16_t *)paddr;
    case 4: return *(uint32_t *)paddr;
    case 8: 
            // #ifdef CONFIG_MTRACE
            // Log("MTRACE_read:addr = %lx, data = %lx, len = %d\n", addr, *(uint64_t *)paddr, len); 
            // #endif
            return *(uint64_t *)paddr;
  }
  assert(0);
  // uint64_t ret = host_read(guest_to_host(addr), len);

  // #ifdef CONFIG_MTRACE
  //   Log("MTRACE_read:addr = %lx, len = %d, data = %lx",addr, len, ret);
  // #endif
  // return ret;
}

uint64_t lsu_pmem_read(uint64_t addr, int len) 
{
  uint8_t * paddr = (uint8_t*) guest_to_host(addr);
  
  switch (len) {
    case 1: return *(uint8_t  *)paddr;
    case 2: return *(uint16_t *)paddr;
    case 4: return *(uint32_t *)paddr;
    case 8: return *(uint64_t *)paddr;
  }
  assert(0);
}