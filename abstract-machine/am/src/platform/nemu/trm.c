#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END); //Area heap结构用于指示堆区的起始和末尾
#ifndef MAINARGS                           //堆区是给程序自由使用的一段内存区间, 为程序提供动态分配内存的功能
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {     //用于输出一个字符
  outb(SERIAL_PORT, ch);
}

void halt(int code) { //用于结束程序的运行
  nemu_trap(code);  //nemu_trap()宏,这个宏展开之后是一条内联汇编语句
                    //nemu_trap()宏还会把一个标识结束的结束码移动到通用寄存器中
                    //通用寄存器中的值将会作为参数传给set_nemu_state(), 将halt()中的结束码设置到NEMU的monitor中,
                    // monitor将会根据结束码来报告程序结束的原因
  // should not reach here
  while (1);
}

void _trm_init() {    //用于进行TRM相关的初始化工作
  int ret = main(mainargs);
  halt(ret);
}
