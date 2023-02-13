#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/common.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/debug.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/utils.h"
// #include "Vysyx_22050078_npc__Dpi.h"
// #include "Vysyx_22050078_npc.h"
// #include "verilated.h"
// #include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define INST_START 0x80000000
#define PMEM_START 0x80000000
#define PMEM_END   0x87ffffff
#define PMEM_MSIZE (PMEM_END+1-PMEM_START)

#define DIFFTEST_ON  1
typedef uint64_t vaddr_t;

typedef struct {
  uint64_t x[32];
  uint64_t pc;
} regfile;

//hostcall.cpp
void set_nemu_state(int state, vaddr_t pc, int halt_ret);

//log.cpp
void init_log(const char *log_file);

//mem.cpp
uint8_t* guest_to_host(uint64_t paddr);
uint64_t host_to_guest(uint8_t *haddr);
uint64_t pmem_read(uint64_t addr, int len);
void pmem_write(uint64_t addr, uint64_t data, int len);

//sim_init.cpp
void sim_init();

//main.cpp
// void step_and_dump_wave(VerilatedContext* contextp, VerilatedVcdC* tfp, Vysyx_22050078_npc * top);

//init.cpp
void npc_init(int argc, char *argv[]);
void engine_start();

//sdb.cpp
void sdb_mainloop();
void sdb_set_batch_mode();
void init_sdb();

//monitor.cpp
void init_monitor(int argc, char *argv[]);

//cpu-exec.cpp
void cpu_exec(uint64_t n);

// void print_regs();
void reg_display();
bool checkregs(regfile *ref, regfile *dut);
regfile pack_dut_regfile(uint64_t *dut_reg,uint64_t pc);

// #ifdef DIFFTEST_ON
// void difftest_init(char *ref_so_file, long img_size);
// bool difftest_check();
// void difftest_step();
// #endif

#endif