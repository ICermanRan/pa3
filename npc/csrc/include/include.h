#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include "common.h"
#include "debug.h"
#include "utils.h"
#include "sdb.h"

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
typedef uint64_t word_t;
typedef uint64_t paddr_t;

typedef struct {
  uint64_t x[32];
  uint64_t pc;
} regfile;

// typedef struct {
//   uint64_t x[32];
//   uint64_t pc;
// } riscv64_CPU_state;

typedef regfile riscv64_CPU_state;
typedef riscv64_CPU_state CPU_state;
extern CPU_state cpu;


//vaddr.cpp
//word_t vaddr_ifetch(vaddr_t addr, int len);
//word_t vaddr_read(vaddr_t addr, int len);
void vaddr_write(vaddr_t addr, int len, word_t data);

//paddr.cpp
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

//state.cpp
int is_exit_status_bad();

//hostcall.cpp
void set_nemu_state(int state, vaddr_t pc, int halt_ret);

//log.cpp
// void init_log(const char *log_file);

//mem.cpp
/* convert the guest physical address in the guest program to host virtual address in NEMU */
//将客户程序的物理地址转化成nemu中主机的虚拟地址
uint8_t* guest_to_host(uint64_t paddr);

/* convert the host virtual address in NEMU to guest physical address in the guest program */
uint64_t host_to_guest(uint8_t *haddr);
uint64_t pmem_read(uint64_t addr, int len);
uint64_t lsu_pmem_read(uint64_t addr, int len);
void pmem_write(uint64_t addr, uint64_t data, int len);

//sim_init.cpp
void sim_init();


//main.cpp
void step_and_dump_wave();
void step_and_dump_wave_2();


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

//reg.cpp

// void print_regs();
void reg_display();
bool checkregs(regfile *ref, regfile *dut);
regfile pack_dut_regfile(uint64_t *dut_reg,uint64_t pc);


#ifdef DIFFTEST_ON
void init_difftest(char *ref_so_file, long img_size);
bool difftest_check();
void difftest_step();
#endif


#endif