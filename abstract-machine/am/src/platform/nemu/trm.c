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
  nemu_trap(code);  //nemu_trap()宏,这个宏展开之后是一条内联汇编语句,执行ebreak指令，
                    //ebreak指令调用NEMUTRAP这个宏，调用set_nemu_state函数，将code的值传递给nemu_state.halt_ret                   
                    //只要monitor检测到nemu_state.halt_ret的值不为0，就会结束nemu的运行！
                    // monitor将会根据结束码来报告程序结束的原因
  // should not reach here
  while (1);
}

void _trm_init() {    //用于进行TRM相关的初始化工作
  int ret = main(mainargs);
  halt(ret);
}
