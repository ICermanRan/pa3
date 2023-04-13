#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
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
