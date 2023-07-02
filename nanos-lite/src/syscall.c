#include <sys/time.h>
#include <common.h> //nanos的include中的common.h已经包含了am的am.h,可以直接用am提供的一些接口，比如halt()
#include "syscall.h"
#include <fs.h>

// #define strace 1

void sys_yiled(Context *c);
void sys_exit(Context *c);
void sys_open(Context *c);
void sys_close(Context *c);
void sys_write(Context *c);
void sys_read(Context *c);
void sys_lseek(Context *c);
void sys_brk(Context *c);
intptr_t sys_gettimeofday(struct timeval *tv, struct timezone *tz);

char* get_syscall_name(uintptr_t syscall_type);

void do_syscall(Context *c) {
  // printf("进入do_syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  uintptr_t syscall_type = a[0];//RISC-V的系统调用号是a7
  // printf("syscall_type/a7 = %x\n", syscall_type);

  switch (syscall_type) {
    case SYS_exit         :sys_exit(c);                  break;
    case SYS_yield        :sys_yiled(c);                 break;
    case SYS_open         :sys_open(c);                  break;    
    case SYS_read         :sys_read(c);                  break;
    case SYS_write        :sys_write(c);                 break;
    case SYS_kill         :                              break;
    case SYS_getpid       :                              break;
    case SYS_close        :sys_close(c);                 break;
    case SYS_lseek        :sys_lseek(c);                 break;
    case SYS_brk          :sys_brk(c);                   break;
    case SYS_fstat        :                              break;
    case SYS_time         :                              break;
    case SYS_signal       :                              break;
    case SYS_execve       :                              break;
    case SYS_fork         :                              break;
    case SYS_link         :                              break;
    case SYS_unlink       :                              break;
    case SYS_times        :                              break;
    case SYS_gettimeofday :c->GPRx = sys_gettimeofday((struct timeval *)a[1], (struct timezone *)a[2]); 
                           break;
    default: panic("Unhandled syscall ID = %d", syscall_type);
  }
  

  #ifdef strace
    Log_white("STRACE detect syscall:%s, ", get_syscall_name(syscall_type));
    Log_white("input regs a0 = 0x%lx, a1 = 0x%lx, a2 = 0x%lx, return GPRx = 0x%lx", a[1], a[2], a[3], c->GPRx);
  #endif
}



void sys_yiled(Context *c) {
  yield();  //yiled by am
  c->GPRx = 0; //a0 = 0,讲义中提到处理系统调用最后一件事就是设置系统调用的返回值
               //对于不同的ISA,系统调用的返回值存放在不同的寄存器中
               //宏GPRx用于实现这一抽象, 所以我们通过GPRx来进行设置系统调用返回值即可.
}

void sys_exit(Context *c) {
  // printf("进入sys_exit\n");
  // c->GPRx = 0;
  // halt(c->GPRx);
  c->GPRx = c->GPR2;
  halt(c->GPR2);
}

void sys_open(Context *c) {
  // printf("进入sys_open\n");
  c->GPRx = fs_open((const char *)c->GPR2, c->GPR3, c->GPR4);
}

void sys_close(Context *c) {
  // printf("进入sys_close\n");
  c->GPRx = fs_close(c->GPR2);
}

void sys_read(Context *c) {
  // printf("进入sys_read\n");
  c->GPRx = fs_read(c->GPR2, (void *)c->GPR3, c->GPR4);
  // printf("c->GPRx= %d\n", c->GPRx);
}

void sys_write(Context *c) {
  // printf("进入sys_write\n");
  c->GPRx = fs_write(c->GPR2, (void *)c->GPR3, c->GPR4);
  // uintptr_t fd = c->GPR2;
  // uint8_t *buf = (uint8_t*)c->GPR3;
  // uintptr_t len = c->GPR4;
  // if(fd == 1 || fd == 2){  //stdout, or stderr.
  //   int i = 0;
  //   for(i=0; i<len; i++){
  //     putch(*(buf+i));
  //   }
  //   c->GPRx = i;
  // }
  // else{
  //   c->GPRx = -1;
  // }
}

void sys_lseek(Context *c) {
  // printf("进入sys_lseek\n");
  c->GPRx = fs_lseek(c->GPR2, c->GPR3, c->GPR4);
}

void sys_brk(Context *c) {
//  printf("new_probrk = %d\n", c->GPR2);
  // printf("进入sys_brk\n");
  c->GPRx = 0;
}

intptr_t sys_gettimeofday(struct timeval *tv, struct timezone *tz) {
  if(tz == NULL) {
    AM_TIMER_UPTIME_T uptime = io_read(AM_TIMER_UPTIME);//通过am,调用io_read(AM_TIMER_UPTIME)就能获取到系统的时间 ,AM_TIMER_UPTIME表示AM系统启动时间, 可读出系统启动后的微秒数
    // printf("通过io_read获得的时间 = %d\n", uptime.us);
    tv->tv_sec = uptime.us / 1000000;//1000000us = 1s,所以由此获得sec
    // tv->tv_sec = uptime.us / 500000;
    return 0;//返回0表示获取时间成功
  }
  else {
    return -1;//返回-1表示获取时间失败
  }
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