#include <common.h>
#include "syscall.h"
#include "am.h"

//处理中断的响应服务由os提供，所以pc的变化也是os完成！
static Context* do_event(Event e, Context* c) {
  printf("进入do_event!\n");
  switch (e.event) {
    // case EVENT_SYSCALL: do_syscall(c); break;
    case EVENT_YIELD: Log("yield happen!");
                      c->mepc = c->mepc + 4;
                      // halt(1);
                      break;
    case EVENT_SYSCALL: Log("syscall happen!"); 
                        do_syscall(c);
                        c->mepc = c->mepc + 4;
                        break;
    // case EVENT_ERROR: Log("irq event error!"); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

//定义宏HAS_CTE,Nanos-lite会调用init_irq()函数
  //最终会调用位于abstract-machine/am/src/$ISA/nemu/cte.c中的cte_init()函数
void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
