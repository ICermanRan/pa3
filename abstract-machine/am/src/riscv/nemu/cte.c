#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include "syscall.h"

static Context* (*user_handler)(Event, Context*) = NULL;

//_am_irq_handle()的代码会把执行流切换的原因打包成事件
//然后调用在cte_init()中注册的事件处理回调函数——>user_handler
//但在Nanos-lite中, 这一回调函数是nanos-lite/src/irq.c中的do_event()函数
Context* __am_irq_handle(Context *c) {
  
    // for(int i = 0; i < 32; i++) {
    //   printf("c->gpr[%d] = %lx\n", i, c->gpr[i]);
    // }
    // printf("c->mcause = %lx\n", c->mcause);
    // printf("c->mstatus = %lx\n", c->mstatus);
    // printf("c->mepc = %lx\n", c->mepc);
    // printf("c->GPR1 = %d\n", c->GPR1);
    
    if (user_handler) {
      Event ev = {0};
      if(c->mcause == 0xb) {
        // if(c->GPR1 >= SYS_exit && c->GPR1 <= SYS_gettimeofday) {
        //   printf("成功判断了\n");
        //   ev.event = EVENT_SYSCALL;
        // }
        if(c->GPR1 >= 0 && c->GPR1 <= 19) { //c->GPR1 >= SYS_exit && c->GPR1 <= SYS_gettimeofday
          ev.event = EVENT_SYSCALL;
          c->mepc +=4;
        }
        else if(c->GPR1 == -1) {
          ev.event = EVENT_YIELD;
          c->mepc +=4;
        }
      }
      else {
        ev.event = EVENT_ERROR;
      }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

//__am_asm_trap 全局函数,是一个中断处理函数，用于处理由外部设备发出的中断。
extern void __am_asm_trap(void);

//统一API-cte_init:用于进行CTE相关的初始化操作.cte_init()函数会做两件事情
//第一件就是设置异常入口地址:对于riscv32来说, 直接将异常入口地址设置到mtvec寄存器中即可.
//第二件事是注册一个事件处理回调函数, 这个回调函数由Nanos-lite提供

//其中它还接受一个来自操作系统的事件处理回调函数的指针, 当发生事件时, 
//CTE将会把事件和相关的上下文作为参数, 来调用这个回调函数, 交由操作系统进行后续处理.
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  //把 __am_asm_trap 的函数地址赋给 %0，然后再执行这条汇编语句
  //设置mtvec寄存器的值即异常入口地址
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
    //_asm_ 是GCC关键字asm的宏定义,用来声明一个内联汇编表达式
    //__volatile__是GCC关键字volatile的宏定义,则是向GCC 声明不答应对该内联汇编优化
  //内联汇编基本格式：__asm__　__volatile__("InSTructiON List" : Output : Input : Clobber/Modify);
    //“r”:
    

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

//统一API-yield:用于进行自陷操作, 会触发一个编号为EVENT_YIELD事件. 
void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
