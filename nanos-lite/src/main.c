#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);

int main() {
  extern const char logo[];
  printf("%s", logo);
  // printf("没有问题\n");
  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  init_mm();

  init_device();

  init_ramdisk();

#ifdef HAS_CTE
  init_irq();
#endif

  init_fs();

  init_proc();

  Log("Finish initialization");

//因为init_irq()提前执行，所以异常入口地址已经通过cte_init准备好了
//触发自陷操作只需要取出这个地址，然后跳转即可
#ifdef HAS_CTE
  yield();
#endif

  panic("Should not reach here");
}
