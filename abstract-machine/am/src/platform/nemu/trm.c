#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) { //用于结束程序的运行
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {    //用于进行TRM相关的初始化工作
  int ret = main(mainargs);
  halt(ret);
}
