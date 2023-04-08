// #include "paddr.h"
// #include "macro.h"
// #include "debug.h"
// #include "include.h"
// #include "common.h"
// #include <memory/host.h>
// #include <memory/paddr.h>

// extern uint64_t dut_pc;
// uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

// /* convert the guest physical address in the guest program to host virtual address in NEMU */
// //将客户程序的物理地址转化成nemu中主机的虚拟地址
// uint8_t* guest_to_host(uint64_t paddr) { return pmem + paddr - PMEM_START; }

// /* convert the host virtual address in NEMU to guest physical address in the guest program */
// //将nemu中主机的虚拟地址转化成客户程序中的物理地址
// uint64_t host_to_guest(uint8_t *haddr) { return haddr - pmem + PMEM_START; }

// word_t pmem_read(paddr_t addr, int len) {
//   word_t ret = host_read(guest_to_host(addr), len);

//   // #ifdef CONFIG_MTRACE
//   //   Log("MTRACE_read:addr = %lx, len = %d, data = %lx",addr, len, ret);
//   // #endif
//   return ret;
// }

// void pmem_write(paddr_t addr, int len, word_t data) {
  
//   // #ifdef CONFIG_MTRACE
//   //   Log("MTRACE_write:addr = %lx, len = %d, data = %lu",addr,len,data);
//   //   // printf("waddr & ~0x7ull = %llx\n", addr & ~0x7ull);
//   // #endif
//   host_write(guest_to_host(addr), len, data);
// }


// static void out_of_bound(paddr_t addr) {
//   panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
//       addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, dut_pc);
// }


// word_t real_paddr_read(paddr_t addr, int len) {
//   if (likely(in_pmem(addr))) return pmem_read(addr, len);
//   IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
//   out_of_bound(addr);
//   return 0;
// }

// word_t paddr_read(paddr_t addr, int len) {
//   word_t data = real_paddr_read(addr,len);
// // #ifdef CONFIG_MTRACE
// //   printf("tracing read  memory, addr = "FMT_PADDR", data = "FMT_WORD"\n",addr,data);
// // #endif
//   return data;
// }

// void paddr_write(paddr_t addr, int len, word_t data) {
// // #ifdef CONFIG_MTRACE
// //   printf("tracing write memory, addr = "FMT_PADDR", data = "FMT_WORD"\n",addr,data);
// // #endif
//   if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
//   IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
//   out_of_bound(addr);
// }


#include "paddr.h"
#include "macro.h"
#include "debug.h"
#include "include.h"
#include "common.h"

static void out_of_bound(paddr_t addr);

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  // IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}


static void out_of_bound(paddr_t addr) {
  // panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
  //     addr, PMEM_LEFT, PMEM_RIGHT, 1);
  printf("address is out of bound of pmem\n");
}