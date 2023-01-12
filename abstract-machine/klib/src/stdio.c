#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)





int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

//函数sprintf()发送格式化输出到out所指向的字符串
//除了前两个参数固定外，后面的参数都是可变的  
int sprintf(char *out, const char *fmt, ...) {
//out是字符数组名，fmt是格式化字符串(像：”%3d%6.2f%#x%o”) 

  va_list ap;       //这是一个 va_list 类型的对象，它用来存储通过 va_arg 获取额外参数时所必需的信息
  va_start(ap,fmt); //void va_start(va_list ap, last_arg) 初始化 ap 变量，
                    //它与 va_arg 和 va_end 宏是一起使用的.last_arg 是最后一个传递给函数的已知的固定参数，即省略号之前的参数
  
  return vsprintf(out, fmt, ap);
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
