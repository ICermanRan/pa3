#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static const char num_table[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

///* 将字符数字串转换成整数, 并将指针前移 */
//为什么宏里data*10：因为如果十进制数字有多位，因为是从左往右读，每一位都相当于往左移后，再加上后面的值，最后全部转换完
#define read_num(fmt,data) {\
	while(*(fmt)>='0'&&*(fmt)<='9') data = (data) *10 +*(fmt) -'0',++fmt;\
}

inline static char* num_to_str(char *st,int d,bool positive){
	if(d==0){*st++='0';return st;}
	if(d>=0&&positive) {*st++='+';}
	if(d<0){*st++='-';d=-d;}
	char temp[30];
	int top=0;
	for(;d;d/=10) temp[++top]=d%10+'0';
	while(top) *st++=temp[top--];
	return st;
}

inline static char* unum_to_str(char *st,unsigned int d,int base){
	if(d==0){*st++='0';return st;}
	char temp[30];
	int top=0;
	for(;d;d/=base) temp[++top]=num_table[d%base];
	while(top) *st++=temp[top--];
	return st;
}

#define MAX_NUM_stdio (1<<20) //把1按二进制方式向左移20位,十进制的1048576
//static char temp[MAX_NUM_stdio];

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

#define cao_arg(d,ap,ch) switch(ch){\
 case 'l':d=va_arg(ap,intptr_t);break;\
 case 'L':d=va_arg(ap,int64_t);break;\
 case 'h':\
 default: d=va_arg(ap,int);break;\
}

//fmt: %[flags][width][.precision][length]specifier
/* 使用参数列表发送格式化输出到字符串 */
int vsprintf(char *out, const char *fmt, va_list ap) {
  int d;
  char c;

  //用于存放转换过程中的字符串
  char *st = out;         //首先将字符指针指向out(buf)
  char * s;

  //然后扫描格式字符串，对各个格式转换指示进行相应的处理
  while(*fmt)
  {
    // 格式转换指示字符串均以 '%' 开始
    // 这里从 fmt 格式字符串中扫描 '%', 寻找格式转换字符串的开始
    if(*fmt != '%')
    {
      //if not
      // 不是格式指示的一般字符均被依次存入st
      *st++ = *fmt++;
      continue;     //如果满足这个if条件，直接进行下一次循环，本次循环不执行后面内容
    }
    else {
      // yes, evaluate it
      fmt++;        //++的作用是跳过第一个%
    }

    //下面取得格式指示字符串中的标志域, 并将标志常量放入 flags 变量中
    int tag;

    enum flags_type{
      notype,
			zero=1,       // 用 '0' 填充
			left=2,       // 左调整
			positive=4,   // 显示 '+'
			empty=8,      // 若为 '+', 则置为空格
			special=16    // 0x
    };

    size_t flags = notype;
    tag = 0;
    while(!tag)     //如果tag=0，!tag = 1,就会使while无限循环
    {               //如果字符串里有满足条件的，就会用break终止循环
      switch(*fmt){
        //左对齐调整
        case '-' : flags |= left; break;      // |= ：按位或后赋值

        //放加号
        case '+' : flags |= positive; break;  

        //放空格
        case ' ' : flags|=empty;panic("Not Implemented or Error happens!"); break;
				
        //是特殊转换
        case '#' : flags|=special;panic("Not Implemented or Error happens!"); break;
				
        //要填零(即'0'), 否则是空格
        case '0' : flags|=zero; break;
        default : tag = 1; break;  
      }
    }

    size_t width = 0;     //输出字段宽度
    
    //取当前参数字段宽度, 放入width变量中
    
    if(*fmt >= '0' && *fmt <= '9')  //如果宽度域中是数值则直接取其为宽度值
      read_num(fmt, width)    //利用宏将字符数字串转换成整数, 并将指针前移  
                              //并改写width
    else if(*fmt == '*')            // 如果宽度域中是字符 '*', 表示下一个参数指定宽度
      {
         ++fmt;
        width = va_arg(ap, int);    // 因此调用 va_arg 取宽度值
        if(width < 0) 
        {
          flags |= left;
          width = -width;
        }
      };

    if(*fmt == '.') panic("Not Support float or Error happens!");

    char length = ' ';
    if(*fmt == 'h' || *fmt == 'l' || *fmt == 'L' || *fmt == 'Z' || *fmt == 'z')
    {
      length = *(fmt++);
      if(length == 'l' && *fmt == 'l')
      {
        length = 'L';
        ++fmt;
      }
    }

    static char temp2[MAX_NUM_stdio];
    char* stt = temp2;
    switch (*(fmt++))
    {
      case 's' :
                s = va_arg(ap, char *);
                for(char *ss = s; *ss; ++ss, ++stt)
                  *stt = *ss;
                break;
      case 'd' :
                cao_arg(d, ap, length)
                stt = num_to_str(stt, d, flags & positive);
                break;
      case 'c' :
                c = (char)va_arg(ap, int);
                *stt++ = c;
                break;
      case '%' :
                *stt++ = '%';
                break;
      case 'u' :
                cao_arg(d,ap,length)
				        stt=unum_to_str(stt,(unsigned)d,10);
				        break;
      case 'o' :
                cao_arg(d,ap,length)
				        stt=unum_to_str(stt,(unsigned)d,8);
				        break;
      case 'X' :
      case 'x' :
      case 'p' :
                cao_arg(d,ap,length)
				        stt=unum_to_str(stt,(unsigned)d,16);
				        break;
      default : 
                panic("Not implemented or error happens");
				        break;
    }

    *stt = '\0';
    if( !(flags & left))
      for(int i = 0; i + strlen(temp2) < width; ++i)
        *(st++) = (flags & zero ? '0' : ' ');
    strcpy(st, temp2);
    st += strlen(temp2);
    if(flags & left)
      for(int i = 0; i + strlen(temp2) < width; ++i)
        *(st++) = ' ';
  }

  *st = '\0';
  return st - out;
}

//函数sprintf()发送格式化输出到out所指向的字符串
//除了前两个参数固定外，后面的参数都是可变的  
int sprintf(char *out, const char *fmt, ...) {
//out是字符数组名，fmt是格式化字符串(像：”%3d%6.2f%#x%o”) 

  va_list ap;       //是在C语言中解决变参问题的一组宏，用于获取不确定个数的参数
  va_start(ap,fmt); //void va_start(va_list ap, last_arg) 初始化 ap 变量，
                    //读取可变参数的过程其实就是在栈区中，使用指针,遍历栈区中的参数列表,
                    //从低地址到高地址一个一个地把参数内容读出来的过程
  va_end(ap);
  return vsprintf(out, fmt, ap);
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
