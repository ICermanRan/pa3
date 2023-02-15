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