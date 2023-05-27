#include <common.h> //nanos的include中的common.h已经包含了am的am.h,可以直接用am提供的一些接口，比如halt()
#include "syscall.h"

void do_syscall(Context *c) {
  // uintptr_t a[4];
  // a[0] = c->GPR1;

  // switch (a[0]) {
  //   default: panic("Unhandled syscall ID = %d", a[0]);
  // }
  printf("进入do_syscall\n");

  uintptr_t syscall_type = c->GPR1;//RISC-V的系统调用号是a7
  // printf("a7 = %x\n", syscall_type);
  #ifdef strace
    uintptr_t a[3] = {c->GPR2, c->GPR3, c->GPR4};
  #endif

 
  switch (syscall_type) {
    case SYS_exit         :sys_exit(c); break;
    case SYS_yield        :sys_yiled(c);break;
    case SYS_open         :             break;    
    case SYS_read         :             break;
    case SYS_write        :             break;
    case SYS_kill         :             break;
    case SYS_getpid       :             break;
    case SYS_close        :             break;
    case SYS_lseek        :             break;
    case SYS_brk          :             break;
    case SYS_fstat        :             break;
    case SYS_time         :             break;
    case SYS_signal       :             break;
    case SYS_execve       :             break;
    case SYS_fork         :             break;
    case SYS_link         :             break;
    case SYS_unlink       :             break;
    case SYS_times        :             break;
    case SYS_gettimeofday :             break;
    default: panic("Unhandled syscall ID = %d", syscall_type);
  }
  

  #ifdef strace
    Log_white("strace detect syscall:%s, ", get_syscall_name(syscall_type));
    Log_white("input regs a0 = 0x%lx, a1 = 0x%lx, a2 = 0x%lx, return GPRx = 0x%lx", a[0], a[1], a[2], c->GPRx);
  #endif
}



void sys_yiled(Context *c) {
  yield();  //yiled by am
  c->GPRx = 0; //a0 = 0,讲义中提到处理系统调用最后一件事就是设置系统调用的返回值
               //对于不同的ISA,系统调用的返回值存放在不同的寄存器中
               //宏GPRx用于实现这一抽象, 所以我们通过GPRx来进行设置系统调用返回值即可.
}

void sys_exit(Context *c) {
  c->GPRx = 0;
  halt(c->GPRx);
}

#ifdef strace
char* get_syscall_name(uintptr_t syscall_type) {
  static char syscall_info[20];
  switch (syscall_type) {
    case SYS_exit         : strcpy(syscall_info, "sys_exit")  ;         break;
    case SYS_yield        : strcpy(syscall_info, "sys_yield") ;         break;
    case SYS_open         : strcpy(syscall_info, "sys_open")  ;         break;    
    case SYS_read         : strcpy(syscall_info, "sys_open")  ;         break;
    case SYS_write        : strcpy(syscall_info, "sys_write") ;         break;
    case SYS_kill         : strcpy(syscall_info, "sys_kill")  ;         break;
    case SYS_getpid       : strcpy(syscall_info, "sys_getpid");         break;
    case SYS_close        : strcpy(syscall_info, "sys_close") ;         break;
    case SYS_lseek        : strcpy(syscall_info, "sys_lseek") ;         break;
    case SYS_brk          : strcpy(syscall_info, "sys_brk")   ;         break;
    case SYS_fstat        : strcpy(syscall_info, "sys_fstat") ;         break;
    case SYS_time         : strcpy(syscall_info, "sys_time")  ;         break;
    case SYS_signal       : strcpy(syscall_info, "sys_signal");         break;
    case SYS_execve       : strcpy(syscall_info, "sys_execve");         break;
    case SYS_fork         : strcpy(syscall_info, "sys_fork")  ;         break;
    case SYS_link         : strcpy(syscall_info, "sys_link")  ;         break;
    case SYS_unlink       : strcpy(syscall_info, "sys_unlink");         break;
    case SYS_times        : strcpy(syscall_info, "sys_times") ;         break;
    case SYS_gettimeofday : strcpy(syscall_info, "sys_gettimeofday") ;  break;
    default:panic("Unhandled syscall name = %d", syscall_type);
  }

  return syscall_info;
}
#endif