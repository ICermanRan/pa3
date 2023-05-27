#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32];
  uintptr_t mcause;
  uintptr_t mstatus;
  uintptr_t mepc;
  void *pdir;
};

//这几个GPR宏的设定是根据navy-apps/libs/libos/src/syscall.c中
//ISA决定的ARGS_ARRAY决定的：
//#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
//# define ARGS_ARRAY ("ecall", "a7", "a0", "a1", "a2", "a0")
//#define GPR1 _args(1, ARGS_ARRAY)
//#define GPR2 _args(2, ARGS_ARRAY)
//#define GPR3 _args(3, ARGS_ARRAY)
//#define GPR4 _args(4, ARGS_ARRAY)
//#define GPRx _args(5, ARGS_ARRAY)
//可见，GPR1 = a7, GPR2 = a0, GPR3 = a1, GPR4 = a2, GPRx = a0
#define GPR1 gpr[17] // a7
#define GPR2 gpr[10] // a0
#define GPR3 gpr[11] // a1
#define GPR4 gpr[12] // a2,
#define GPRx gpr[10] // a0
#endif
