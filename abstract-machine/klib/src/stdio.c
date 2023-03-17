
/*                                       第一种                                       */

// #include <am.h>
// #include <klib.h>
// #include <klib-macros.h>
// #include <stdarg.h>

// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// static const char num_table[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

// #define read_num(fmt,data) {
// 	while(*(fmt)>='0'&&*(fmt)<='9') data = (data) *10 +*(fmt) -'0',++fmt;
// }

// inline static char* num_to_str(char *st,int d,bool positive){
// 	if(d==0){*st++='0';return st;}
// 	if(d>=0&&positive) {*st++='+';}
// 	if(d<0){*st++='-';d=-d;}
// 	char temp[30];
// 	int top=0;
// 	for(;d;d/=10) temp[++top]=d%10+'0';
// 	while(top) *st++=temp[top--];
// 	return st;
// }

// inline static char* unum_to_str(char *st,unsigned int d,int base){
// 	if(d==0){*st++='0';return st;}
// 	char temp[30];
// 	int top=0;
// 	for(;d;d/=base) temp[++top]=num_table[d%base];
// 	while(top) *st++=temp[top--];
// 	return st;
// }

// #define MAX_NUM_stdio (1<<20)
// static char temp[MAX_NUM_stdio];


// int printf(const char *fmt, ...) {
//   va_list ap; va_start(ap,fmt);
// 	int len=vsprintf(temp,fmt,ap);
// 	va_end(ap);
// 	putstr(temp);
// 	return len;
// }


// #define cao_arg(d,ap,ch) switch(ch){
//  case 'l':d=va_arg(ap,intptr_t);break;
//  case 'L':d=va_arg(ap,int64_t);break;
//  case 'h':
//  default: d=va_arg(ap,int);break;
// }

// int vsprintf(char *out, const char *fmt, va_list ap) {
//   int d;char c;char *st=out;char* s;
// 	while(*fmt){
// 		if(*fmt!='%'){
// 			*st++=*fmt++;
// 			continue;
// 		}
// 		int tag;

// 		enum flags_type{
// 			notype,
// 			zero=1,
// 			left=2,
// 			positive=4,
// 			empty=8,
// 			sharp=16
// 		};
// 		size_t flags=notype;
// 		tag=0;
// 		while(!tag){
// 			switch (*(++fmt)){
// 				case '-':flags|=left;break;
// 				case '+':flags|=positive;break;
// 				case ' ':flags|=empty;panic("Not Implemented or Error happens!");break;
// 				case '#':flags|=sharp;panic("Not Implemented or Error happens!");break;
// 				case '0':flags|=zero;break;
// 				default:tag=1;break;
// 			}
// 		}

// 		size_t width=0;
// 		if(*fmt>='0'&&*fmt<='9') read_num(fmt,width)
// 		else if(*fmt=='*'){
// 			width=va_arg(ap,int);
// 			if(width<0) flags|=left,width=-width;
// 			++fmt;
// 		};


// 		if(*fmt=='.') panic("Not Support float or Error happens!");

// 		char length=' ';
// 		if(*fmt=='h'||*fmt=='l'||*fmt=='L'||*fmt=='Z'||*fmt=='z'){
// 			length=*(fmt++);
// 			if(length=='l'&&*fmt=='l'){
// 				length='L';
// 				++fmt;
// 				//panic("Not implemented or Error hapens");
// 			}
// 		}

// 		static char temp2[MAX_NUM_stdio];
// 		char* stt=temp2;
// 		switch (*(fmt++)){
// 			case 's':
// 				s=va_arg(ap,char *);
// 				for(char *ss=s;*ss;++ss,++stt) *stt=*ss;
// 				break;
// 			case 'd':
// 				cao_arg(d,ap,length)
// 				stt=num_to_str(stt,d,flags&positive);
// 				break;
// 			case 'c':
// 				c=(char)va_arg(ap,int);
// 				*stt++=c;
// 				break;
// 			case '%':
// 				*stt++='%';
// 				break;
// 			case 'u':
// 				cao_arg(d,ap,length)
// 				stt=unum_to_str(stt,(unsigned)d,10);
// 				break;
// 			case 'o':
// 				cao_arg(d,ap,length)
// 				stt=unum_to_str(stt,(unsigned)d,8);
// 				break;
// 			case 'X': case 'x':case 'p':
// 				cao_arg(d,ap,length)
// 				stt=unum_to_str(stt,(unsigned)d,16);
// 				break;
// 			default:
// 				panic("Not implemented or error happens");
// 				break;
// 		}
// 		*stt='\0';

// 		if(!(flags&left))
// 			for(int i=0;i+strlen(temp2)<width;++i) *(st++)=(flags&zero?'0':' ');
// 		strcpy(st,temp2);
// 		st+=strlen(temp2);
// 		if(flags&left)
// 			for(int i=0;i+strlen(temp2)<width;++i) *(st++)=' ';
// 	}
// 	*st='\0';
// 	return st-out;
// }

// int sprintf(char *out, const char *fmt, ...) {
//   va_list ap; va_start(ap,fmt);
// 	return vsprintf(out,fmt,ap);
// }

// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   va_list ap; va_start(ap,fmt);
// 	return vsnprintf(out,n,fmt,ap);
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   int len=vsprintf(temp,fmt,ap);
// 	strncpy(out,temp,n-1);
// 	out[n-1]='\0';
// 	return len;
// }

// #endif

/*                                       第一种，end                                       */


/*                                       第二种                                       */
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define ZEROPAD 1  /* pad with zero 填补0*/
#define SIGN 2     /* unsigned/signed long */
#define PLUS 4     /* show plus 显示+*/
#define SPACE 8    /* space if plus 加上空格*/
#define LEFT 16    /* left justified 左对齐*/
#define SMALL 32   /* Must be 32 == 0x20 */
#define SPECIAL 64 /* 0x /0 */

// 进制之间的相互转换
#define __do_div(n, base) ({ \
int __res; \
__res = ((unsigned long) n) % (unsigned) base;\
n = ((unsigned long) n) / (unsigned) base; \
__res; })

static inline int isdigit(int c)
{
  return '0' <= c && c <= '9';
}

////获得字段转化为整数，例如%12d中的字母12提出来变成整型12
static int skip_atoi(const char **s) // 二级指针，存进来的是字符串的地址
{
  int i = 0;
  while (isdigit(**s)) // 解二级指针，传进isdigit的是字符串，用于判断目前是否是数字
    i = i * 10 + *((*s)++) - '0';
  return i;
}

////以特定的进制格式化输出字符
static char *number(char *str, long num, int base, int size, int precision,
                    int type)
{
  /* we are called with base 8, 10 or 16, only, thus don't need "G..."  */
  /* 我们只以8, 10, 16为基数，因此不需要G之后的字符 */
  static const char digits[16] = "0123456789ABCDEF"; /* "GHIJKLMNOPQRSTUVWXYZ"; */
  char tmp[66];
  char c, sign, locase;
  int i;
  /* locase = 0 or 0x20. ORing digits or letters with 'locase'
   * produces same digits or (maybe lowercased) letters */
  locase = (type & SMALL);

  if (type & LEFT) // 如果有‘-’，如果出现了左对齐，就取消前面补0
    type &= ~ZEROPAD;
  if (base < 2 || base > 16)
    return NULL;

  c = (type & ZEROPAD) ? '0' : ' '; // 如果标志符有0则补0，否则补空格；例如%02d
  sign = 0;                         // 符号

  if (type & SIGN)
  { // 有符号与无符号的转换
    if ((signed long)num < 0)
    {
      sign = '-';
      num = -(signed long)num; // 取正值
      size--;
    }
    else if (type & PLUS) // 显示+
    {
      sign = '+';
      size--;
    }
    else if (type & SPACE) // 填补空格
    {
      sign = ' ';
      size--;
    }
  }

  // 处理十六进制字宽问题
  if (type & SPECIAL) // 十六进制显示
  {
    if (base == 16)
      size -= 2; // 0x
    else if (base == 8)
      size--; // 0
  }

  i = 0;
  if (num == 0)     // 如果参数为0，则记录字符0
    tmp[i++] = '0'; // tmp中的内容会放到缓冲区中
  else
    while (num != 0)                                     // 循环,num /= base
      tmp[i++] = (digits[__do_div(num, base)] | locase); // 将进制转换,低地址先进tmp

  // 地址长度大于精度，直接按地址长度输出，如果精度大于地址位数，先补空格
  // 例如：printf("%18p\n",&a);-->空格空格00000000FAF27284
  if (i > precision)
    precision = i;
  size -= precision;
  if (!(type & (ZEROPAD + LEFT))) // 没有'-'和补0,直接补空格
    while (size-- > 0)
      *str++ = ' ';
  if (sign) // 如果有符号，输出符号，符号包括：'-','+','',0
    *str++ = sign;
  if (type & SPECIAL) // 输出8进制或16进制符号0或0x
  {
    if (base == 8)
      *str++ = '0';
    else if (base == 16)
    {
      *str++ = '0';
      *str++ = ('X' | locase); // X
    }
  }

  if (!(type & LEFT)) // 没有-
    while (size-- > 0)
      *str++ = c;         // c为0或空格
  while (i < precision--) // i为转换后存在tmp中字符的个数
    *str++ = '0';
  while (i-- > 0)
    *str++ = tmp[i]; // tmp中存储着转换了的参数
  while (size-- > 0)
    *str++ = ' ';
  return str;
}

int vsprintf(char *buf, const char *fmt, va_list args)
{
  int len;
  unsigned long num;
  int i, base;
  char *str;
  const char *s;
  int flags;       /* flags to number()      用在number()函数的标志 */
  int field_width; /* width of output field  输出字段的宽度         */
  
  //精度；用在浮点数时表示输出小数点后几位；用在字符串时表示输出字符个数
  int precision;   /* min. # of digits for integers; max
          number of chars for from string */
  int qualifier;   /* 'h', 'l', or 'L' for integer fields */

  /* 将字符逐个放到输出缓冲区中，直到遇到第一个% */
  for (str = buf; *fmt; ++fmt)
  {
    if (*fmt != '%')
    {  //寻找%
      *str++ = *fmt;
      continue;//没遇到%就跳过for后面的代码，进入下一次循环
    }

    //遇到%后执行下面代码	
    /* process flags,第一步处理flags */
    flags = 0;
  repeat:
    ++fmt; /* this also skips first '%' */ //跳过第一个 '%'
    switch (*fmt)   //判断%后面的字符，对格式运算符的标志的处理
    { // |= 意思为：按位或后赋值
    case '-': flags |= LEFT; goto repeat;//flags=10000(二进制，下面一样)
    case '+': flags |= PLUS; goto repeat;//flags=100
    case ' ': flags |= SPACE;goto repeat;//flags=1000
    case '#': flags |= SPECIAL;goto repeat;//flags=10 0000
    case '0': flags |= ZEROPAD;goto repeat;//flags=1 
    }

    //对字段宽度的处理
    /* get field width，第二步处理width */
    field_width = -1;
    if (isdigit(*fmt))
      field_width = skip_atoi(&fmt);//通过skip_atoi返回得到字段宽度
    else if (*fmt == '*')           //*表示可变宽度
    {
      ++fmt;
      /* it's the next argument */
      field_width = va_arg(args, int);//获得表示字段宽度的参数
      /*一般使用最后一个固定参数args来初始化这个函数，
			得到的下一个参数为第一个变参,即printf("%*d",a,b);中的a,
			这里a表示字段宽度。字符串为固定参数；变参函数至少要有一个固定参数。*/
      
      if (field_width < 0)//手动输入负数，左对齐，例如printf("%*d",-2,3);field_width=-2
      {
        field_width = -field_width;//取反,负变正
        flags |= LEFT;
      }
    }

    // 获取精度
    /* get the precision */
    precision = -1;
    if (*fmt == '.')
    {
      ++fmt;
      if (isdigit(*fmt))
        precision = skip_atoi(&fmt);//获得精度
      else if (*fmt == '*')//可变精度，printf("%.*f",2,3.1415);-->3.14
      {
        ++fmt; 
        /* it's the next argument */
        /* 获取表示精度的参数(以整数类型获取, printf("%.*f",2,3.1415)中的2 */
        precision = va_arg(args, int);
      }
      if (precision < 0)
        precision = 0;
    }

    /* get the conversion qualifier */
    //获取转换修饰符,即%hd、%ld、%lld、%Lf...中的h、l、L、Z (ll用q代替)
    //目前只考虑h、l、L
    qualifier = -1;
    if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L')
    {
      qualifier = *fmt;
      ++fmt;
    }

    /* default base */
    base = 10;//默认十进制
    //对c、s、p、n、%、o等做处理
    switch (*fmt)
    {
    //转换格式符为%c
    case 'c':
      //如果没有有‘-’，先输出字宽-1个空格再输出字符
      if (!(flags & LEFT))//如果没有'-'标记符
        while (--field_width > 0)
          *str++ = ' ';//根据字段输出空格' '
      /*获取字符参数时是先以int类型获取再强转为unsigned char，
                为了获取过程中保证精度不丢失。*/
      *str++ = (unsigned char)va_arg(args, int);
      // 如果有'-'，先输出字符再填补空格,注意是先--的，所以实际空格会比输入的字段少1
      // 再加上参数就刚好够宽度；比如printf("%5d",2);输出：空格空格空格空格2。
      while (--field_width > 0)
        *str++ = ' ';
      continue;

    //转换格式符为%s 
    case 's':
      s = va_arg(args, char *);//char*格式获取参数
      if (!s)                  //如果字符串不存在，则返回(NULL)
				s = "<NULL>";
      
      /*如果字符串中字符个数大于精度，len为精度；
	      否则len为字符个数,即精度表示了字符串输出字符的个数*/
      len = strnlen(s, precision);

      //处理'-',即printf("%-s","hello");
      if (!(flags & LEFT))
        while (len < field_width--)
          *str++ = ' ';
      for (i = 0; i < len; ++i)
        *str++ = *s++;
      while (len < field_width--)
        *str++ = ' ';
      continue;

    //处理格式符%p
    case 'p':
      if (field_width == -1)//如果没有设置字段宽度
      {
        /*字宽为8或16(根据系统而定)，因为2个位表示一个字节；
        例如32位系统指针大小位4字节，oxFF FF FF FF,需要8个字宽才能存储*/
        field_width = 2 * sizeof(void *);
        flags |= ZEROPAD;//flags = 1;会在前面补0
      }
      //转为16进制并存进缓冲区中
      str = number(str,
                   (unsigned long)va_arg(args, void *), 16,
                   field_width, precision, flags);
      continue;

    //buf为1024字节空间的输出缓冲区（静态char数组）
    case 'n':
      if (qualifier == 'l')
      {
        long *ip = va_arg(args, long *);
        *ip = (str - buf);//获取输出缓冲数组中的个数
      }
      else
      {
        int *ip = va_arg(args, int *);
        *ip = (str - buf);
      }
      continue;

    case '%':
      *str++ = '%';
      continue;

      /* integer number formats - set up the flags and "break" */
    case 'o':
      base = 8;
      break;

    case 'x'://十六进制
      flags |= SMALL;
    case 'X'://小写转大写
      base = 16;
      break;

    case 'd'://十进制
    case 'i':
      flags |= SIGN;
    case 'u'://无符号
      break;

    default:
      *str++ = '%';
      if (*fmt)
        *str++ = *fmt;
      else
        --fmt;
      continue;
    }
    if (qualifier == 'l')
      num = va_arg(args, unsigned long);
    else if (qualifier == 'h')
    {
      num = (unsigned short)va_arg(args, int);
      if (flags & SIGN)
        num = (short)num;
    }
    else if (flags & SIGN)
      num = va_arg(args, int);
    else
      num = va_arg(args, unsigned int);
     
    //转换为对应的个数再存到缓冲区中
    str = number(str, num, base, field_width, precision, flags);
  }
  *str = '\0';//最后以'\0'结束
  return str - buf;//返回写入的字节长度
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

int sprintf(char *buf, const char *fmt, ...)
{
  va_list args;
  int i;

  //void va_start(va_list ap, last_arg) 初始化va_list型变量 ap ，它与 va_arg 和 va_end 宏是一起使用的。
    //ap -- 这是一个 va_list 类型的对象，它用来存储通过 va_arg 获取额外参数时所必需的信息。
    //last_arg 是最后一个传递给函数的已知的固定参数，即省略号之前的参数。
  

  //va_arg(va_list ap, type) 检索函数参数列表中类型为 type 的下一个参数.它无法判断检索到的参数是否是传给函数的最后一个参数。
    //ap -- 这是一个 va_list 类型的对象，存储了有关额外参数和检索状态的信息。
      //该对象应在第一次调用 va_arg 之前通过调用 va_start 进行初始化。
    //type -- 这是一个类型名称。该类型名称是作为扩展自该宏的表达式的类型来使用的
    //该宏返回下一个额外的参数，是一个类型为 type 的表达式
  va_start(args, fmt);//初始化，就相当于把args和fmt连接起来了，让args知道了fmt要传什么类型的数据
                      //当后需要分析不定数量的fmt时，就可以通过va_arg宏和args来解析
  i = vsprintf(buf, fmt, args);
  va_end(args);
  return i;
}

void puts(const char *str)
{
  while (*str)
    putch(*str++);
}

// printf() 格式控制符的完整形式如下
/* %[flag][width][.precision]type
 [ ] 表示此处的内容可有可无，是可以省略的。*/

// 1、type 表示输出类型，比如 %d、%f、%c、%lf，type 就分别对应 d、f、c、lf；
// 再如，%-9d中 type 对应 d。type 这一项必须有，这意味着输出时必须要知道是什么类型。

// 2、width 表示最小输出宽度，也就是至少占用几个字符的位置；
// 例如，%-9d中 width 对应 9，表示输出结果最少占用 9 个字符的宽度。
// 当输出结果的宽度不足 width 时，以空格补齐（如果没有指定对齐方式，默认会在左边补齐空格）；
// 当输出结果的宽度超过 width 时，width 不再起作用，按照数据本身的宽度来输出

// 3、precision 表示输出精度，也就是小数的位数。
// 当小数部分的位数大于 precision 时，会按照四舍五入的原则丢掉多余的数字；
// 当小数部分的位数小于 precision 时，会在后面补 0。
// 另外，.precision 也可以用于整数和字符串，但是功能却是相反的：
// 用于整数时，.precision 表示最小输出宽度。与 width 不同的是，整数的宽度不足时会在左边补 0，而不是补空格。
// 用于字符串时，.precision 表示最大输出宽度，或者说截取字符串。当字符串的长度大于 precision 时，会截掉多余的字符；当字符串的长度小于 precision 时，.precision 就不再起作用。

// 4、flag 是标志字符
// 例如，%#x中 flag 对应 #，%-9d中 flags 对应-

//  标志                         含义
//   -             -表示左对齐。如果没有，就按照默认的对齐方式，默认一般为右对齐。
//   +             用于整数或者小数，表示输出符号（正负号）。如果没有，那么只有负数才会输出符号
//  空格            用于整数或者小数，输出值为正时冠以空格，为负时冠以负号。
//   #             对于八进制（%o）和十六进制（%x / %X）整数，# 表示在输出时添加前缀；
//                      八进制的前缀是 0，十六进制的前缀是 0x / 0X。
//                 对于小数（%f / %e / %g），# 表示强迫输出小数点。
//                      如果没有小数部分，默认是不输出小数点的，加上 # 以后，即使没有小数部分也会带上小数点。
int printf(const char *fmt, ...)
{
  char printf_buf[1024];
  va_list args;
  int printed;

  va_start(args, fmt);
  printed = vsprintf(printf_buf, fmt, args);
  va_end(args);

  putstr(printf_buf);

  return printed;
}

#endif

/*                                       第二种，end                                       */

/*                                       第三种                                      */


// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// // 'ntoa' conversion buffer size, this must be big enough to hold one converted
// // numeric number including padded zeros (dynamically created on stack)
// // default: 32 byte
// #ifndef PRINTF_NTOA_BUFFER_SIZE
// #define PRINTF_NTOA_BUFFER_SIZE    32U
// #endif

// // 'ftoa' conversion buffer size, this must be big enough to hold one converted
// // float number including padded zeros (dynamically created on stack)
// // default: 32 byte
// #ifndef PRINTF_FTOA_BUFFER_SIZE
// #define PRINTF_FTOA_BUFFER_SIZE    32U
// #endif

// // support for the floating point type (%f)
// // default: activated
// #ifndef PRINTF_DISABLE_SUPPORT_FLOAT
// #define PRINTF_SUPPORT_FLOAT
// #endif

// // support for exponential floating point notation (%e/%g)
// // default: activated
// #ifndef PRINTF_DISABLE_SUPPORT_EXPONENTIAL
// #define PRINTF_SUPPORT_EXPONENTIAL
// #endif

// // define the default floating point precision
// // default: 6 digits
// #ifndef PRINTF_DEFAULT_FLOAT_PRECISION
// #define PRINTF_DEFAULT_FLOAT_PRECISION  6U
// #endif

// // define the largest float suitable to print with %f
// // default: 1e9
// #ifndef PRINTF_MAX_FLOAT
// #define PRINTF_MAX_FLOAT  1e9
// #endif

// // support for the long long types (%llu or %p)
// // default: activated
// #ifndef PRINTF_DISABLE_SUPPORT_LONG_LONG
// #define PRINTF_SUPPORT_LONG_LONG
// #endif

// // support for the ptrdiff_t type (%t)
// // ptrdiff_t is normally defined in <stddef.h> as long or long long type
// // default: activated
// #ifndef PRINTF_DISABLE_SUPPORT_PTRDIFF_T
// #define PRINTF_SUPPORT_PTRDIFF_T
// #endif

// ///////////////////////////////////////////////////////////////////////////////

// // internal flag definitions
// #define FLAGS_ZEROPAD   (1U <<  0U)
// #define FLAGS_LEFT      (1U <<  1U)
// #define FLAGS_PLUS      (1U <<  2U)
// #define FLAGS_SPACE     (1U <<  3U)
// #define FLAGS_HASH      (1U <<  4U)
// #define FLAGS_UPPERCASE (1U <<  5U)
// #define FLAGS_CHAR      (1U <<  6U)
// #define FLAGS_SHORT     (1U <<  7U)
// #define FLAGS_LONG      (1U <<  8U)
// #define FLAGS_LONG_LONG (1U <<  9U)
// #define FLAGS_PRECISION (1U << 10U)
// #define FLAGS_ADAPT_EXP (1U << 11U)

// // import float.h for DBL_MAX
// #if defined(PRINTF_SUPPORT_FLOAT)
// #include <float.h>
// #endif

// // output function type
// typedef void (*out_fct_type)(char character, void* buffer, size_t idx, size_t maxlen);

// // wrapper (used as buffer) for output function type
// typedef struct {
//   void  (*fct)(char character, void* arg);
//   void* arg;
// } out_fct_wrap_type;

// // internal buffer output
// static inline void _out_buffer(char character, void* buffer, size_t idx, size_t maxlen)
// {
//   if (idx < maxlen) {
//     ((char*)buffer)[idx] = character;
//   }
// }

// // internal null output
// static inline void _out_null(char character, void* buffer, size_t idx, size_t maxlen)
// {
//   (void)character; (void)buffer; (void)idx; (void)maxlen;
// }

// // internal putch wrapper
// static inline void _out_char(char character, void* buffer, size_t idx, size_t maxlen)
// {
//   (void)buffer; (void)idx; (void)maxlen;
//   if (character) {
//     putch(character);
//   }
// }

// // internal output function wrapper
// static inline void _out_fct(char character, void* buffer, size_t idx, size_t maxlen)
// {
//   (void)idx; (void)maxlen;
//   if (character) {
//     // buffer is the output fct pointer
//     ((out_fct_wrap_type*)buffer)->fct(character, ((out_fct_wrap_type*)buffer)->arg);
//   }
// }

// // internal secure strlen
// // \return The length of the string (excluding the terminating 0) limited by 'maxsize'
// static inline unsigned int _strnlen_s(const char* str, size_t maxsize)
// {
//   const char* s;
//   for (s = str; *s && maxsize--; ++s);
//   return (unsigned int)(s - str);
// }

// // internal test if char is a digit (0-9)
// // \return true if char is a digit
// static inline bool _is_digit(char ch)
// {
//   return (ch >= '0') && (ch <= '9');
// }

// // internal ASCII string to unsigned int conversion
// static unsigned int _atoi(const char** str)
// {
//   unsigned int i = 0U;
//   while (_is_digit(**str)) {
//     i = i * 10U + (unsigned int)(*((*str)++) - '0');
//   }
//   return i;
// }

// // output the specified string in reverse, taking care of any zero-padding
// static size_t _out_rev(out_fct_type out, char* buffer, size_t idx, size_t maxlen, const char* buf, size_t len, unsigned int width, unsigned int flags)
// {
//   const size_t start_idx = idx;

//   // pad spaces up to given width
//   if (!(flags & FLAGS_LEFT) && !(flags & FLAGS_ZEROPAD)) {
//     for (size_t i = len; i < width; i++) {
//       out(' ', buffer, idx++, maxlen);
//     }
//   }

//   // reverse string
//   while (len) {
//     out(buf[--len], buffer, idx++, maxlen);
//   }

//   // append pad spaces up to given width
//   if (flags & FLAGS_LEFT) {
//     while (idx - start_idx < width) {
//       out(' ', buffer, idx++, maxlen);
//     }
//   }

//   return idx;
// }

// // internal itoa format
// static size_t _ntoa_format(out_fct_type out, char* buffer, size_t idx, size_t maxlen, char* buf, size_t len, bool negative, unsigned int base, unsigned int prec, unsigned int width, unsigned int flags)
// {
//   // pad leading zeros
//   if (!(flags & FLAGS_LEFT)) {
//     if (width && (flags & FLAGS_ZEROPAD) && (negative || (flags & (FLAGS_PLUS | FLAGS_SPACE)))) {
//       width--;
//     }
//     while ((len < prec) && (len < PRINTF_NTOA_BUFFER_SIZE)) {
//       buf[len++] = '0';
//     }
//     while ((flags & FLAGS_ZEROPAD) && (len < width) && (len < PRINTF_NTOA_BUFFER_SIZE)) {
//       buf[len++] = '0';
//     }
//   }

//   // handle hash
//   if (flags & FLAGS_HASH) {
//     if (!(flags & FLAGS_PRECISION) && len && ((len == prec) || (len == width))) {
//       len--;
//       if (len && (base == 16U)) {
//         len--;
//       }
//     }
//     if ((base == 16U) && !(flags & FLAGS_UPPERCASE) && (len < PRINTF_NTOA_BUFFER_SIZE)) {
//       buf[len++] = 'x';
//     }
//     else if ((base == 16U) && (flags & FLAGS_UPPERCASE) && (len < PRINTF_NTOA_BUFFER_SIZE)) {
//       buf[len++] = 'X';
//     }
//     else if ((base == 2U) && (len < PRINTF_NTOA_BUFFER_SIZE)) {
//       buf[len++] = 'b';
//     }
//     if (len < PRINTF_NTOA_BUFFER_SIZE) {
//       buf[len++] = '0';
//     }
//   }

//   if (len < PRINTF_NTOA_BUFFER_SIZE) {
//     if (negative) {
//       buf[len++] = '-';
//     }
//     else if (flags & FLAGS_PLUS) {
//       buf[len++] = '+';  // ignore the space if the '+' exists
//     }
//     else if (flags & FLAGS_SPACE) {
//       buf[len++] = ' ';
//     }
//   }

//   return _out_rev(out, buffer, idx, maxlen, buf, len, width, flags);
// }

// // internal itoa for 'long' type
// static size_t _ntoa_long(out_fct_type out, char* buffer, size_t idx, size_t maxlen, unsigned long value, bool negative, unsigned long base, unsigned int prec, unsigned int width, unsigned int flags)
// {
//   char buf[PRINTF_NTOA_BUFFER_SIZE];
//   size_t len = 0U;

//   // no hash for 0 values
//   if (!value) {
//     flags &= ~FLAGS_HASH;
//   }

//   // write if precision != 0 and value is != 0
//   if (!(flags & FLAGS_PRECISION) || value) {
//     do {
//       const char digit = (char)(value % base);
//       buf[len++] = digit < 10 ? '0' + digit : (flags & FLAGS_UPPERCASE ? 'A' : 'a') + digit - 10;
//       value /= base;
//     } while (value && (len < PRINTF_NTOA_BUFFER_SIZE));
//   }

//   return _ntoa_format(out, buffer, idx, maxlen, buf, len, negative, (unsigned int)base, prec, width, flags);
// }

// // internal itoa for 'long long' type
// #if defined(PRINTF_SUPPORT_LONG_LONG)
// static size_t _ntoa_long_long(out_fct_type out, char* buffer, size_t idx, size_t maxlen, unsigned long long value, bool negative, unsigned long long base, unsigned int prec, unsigned int width, unsigned int flags)
// {
//   char buf[PRINTF_NTOA_BUFFER_SIZE];
//   size_t len = 0U;

//   // no hash for 0 values
//   if (!value) {
//     flags &= ~FLAGS_HASH;
//   }

//   // write if precision != 0 and value is != 0
//   if (!(flags & FLAGS_PRECISION) || value) {
//     do {
//       const char digit = (char)(value % base);
//       buf[len++] = digit < 10 ? '0' + digit : (flags & FLAGS_UPPERCASE ? 'A' : 'a') + digit - 10;
//       value /= base;
//     } while (value && (len < PRINTF_NTOA_BUFFER_SIZE));
//   }

//   return _ntoa_format(out, buffer, idx, maxlen, buf, len, negative, (unsigned int)base, prec, width, flags);
// }
// #endif  // PRINTF_SUPPORT_LONG_LONG

// #if defined(PRINTF_SUPPORT_FLOAT)

// #if defined(PRINTF_SUPPORT_EXPONENTIAL)
// // forward declaration so that _ftoa can switch to exp notation for values > PRINTF_MAX_FLOAT
// static size_t _etoa(out_fct_type out, char* buffer, size_t idx, size_t maxlen, double value, unsigned int prec, unsigned int width, unsigned int flags);
// #endif

// // internal ftoa for fixed decimal floating point
// static size_t _ftoa(out_fct_type out, char* buffer, size_t idx, size_t maxlen, double value, unsigned int prec, unsigned int width, unsigned int flags)
// {
//   char buf[PRINTF_FTOA_BUFFER_SIZE];
//   size_t len  = 0U;
//   double diff = 0.0;

//   // powers of 10
//   static const double pow10[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };

//   // test for special values
//   if (value != value)
//     return _out_rev(out, buffer, idx, maxlen, "nan", 3, width, flags);
//   if (value < -DBL_MAX)
//     return _out_rev(out, buffer, idx, maxlen, "fni-", 4, width, flags);
//   if (value > DBL_MAX)
//     return _out_rev(out, buffer, idx, maxlen, (flags & FLAGS_PLUS) ? "fni+" : "fni", (flags & FLAGS_PLUS) ? 4U : 3U, width, flags);

//   // test for very large values
//   // standard printf behavior is to print EVERY whole number digit -- which could be 100s of characters overflowing your buffers == bad
//   if ((value > PRINTF_MAX_FLOAT) || (value < -PRINTF_MAX_FLOAT)) {
// #if defined(PRINTF_SUPPORT_EXPONENTIAL)
//     return _etoa(out, buffer, idx, maxlen, value, prec, width, flags);
// #else
//     return 0U;
// #endif
//   }

//   // test for negative
//   bool negative = false;
//   if (value < 0) {
//     negative = true;
//     value = 0 - value;
//   }

//   // set default precision, if not set explicitly
//   if (!(flags & FLAGS_PRECISION)) {
//     prec = PRINTF_DEFAULT_FLOAT_PRECISION;
//   }
//   // limit precision to 9, cause a prec >= 10 can lead to overflow errors
//   while ((len < PRINTF_FTOA_BUFFER_SIZE) && (prec > 9U)) {
//     buf[len++] = '0';
//     prec--;
//   }

//   int whole = (int)value;
//   double tmp = (value - whole) * pow10[prec];
//   unsigned long frac = (unsigned long)tmp;
//   diff = tmp - frac;

//   if (diff > 0.5) {
//     ++frac;
//     // handle rollover, e.g. case 0.99 with prec 1 is 1.0
//     if (frac >= pow10[prec]) {
//       frac = 0;
//       ++whole;
//     }
//   }
//   else if (diff < 0.5) {
//   }
//   else if ((frac == 0U) || (frac & 1U)) {
//     // if halfway, round up if odd OR if last digit is 0
//     ++frac;
//   }

//   if (prec == 0U) {
//     diff = value - (double)whole;
//     if ((!(diff < 0.5) || (diff > 0.5)) && (whole & 1)) {
//       // exactly 0.5 and ODD, then round up
//       // 1.5 -> 2, but 2.5 -> 2
//       ++whole;
//     }
//   }
//   else {
//     unsigned int count = prec;
//     // now do fractional part, as an unsigned number
//     while (len < PRINTF_FTOA_BUFFER_SIZE) {
//       --count;
//       buf[len++] = (char)(48U + (frac % 10U));
//       if (!(frac /= 10U)) {
//         break;
//       }
//     }
//     // add extra 0s
//     while ((len < PRINTF_FTOA_BUFFER_SIZE) && (count-- > 0U)) {
//       buf[len++] = '0';
//     }
//     if (len < PRINTF_FTOA_BUFFER_SIZE) {
//       // add decimal
//       buf[len++] = '.';
//     }
//   }

//   // do whole part, number is reversed
//   while (len < PRINTF_FTOA_BUFFER_SIZE) {
//     buf[len++] = (char)(48 + (whole % 10));
//     if (!(whole /= 10)) {
//       break;
//     }
//   }

//   // pad leading zeros
//   if (!(flags & FLAGS_LEFT) && (flags & FLAGS_ZEROPAD)) {
//     if (width && (negative || (flags & (FLAGS_PLUS | FLAGS_SPACE)))) {
//       width--;
//     }
//     while ((len < width) && (len < PRINTF_FTOA_BUFFER_SIZE)) {
//       buf[len++] = '0';
//     }
//   }

//   if (len < PRINTF_FTOA_BUFFER_SIZE) {
//     if (negative) {
//       buf[len++] = '-';
//     }
//     else if (flags & FLAGS_PLUS) {
//       buf[len++] = '+';  // ignore the space if the '+' exists
//     }
//     else if (flags & FLAGS_SPACE) {
//       buf[len++] = ' ';
//     }
//   }

//   return _out_rev(out, buffer, idx, maxlen, buf, len, width, flags);
// }

// #if defined(PRINTF_SUPPORT_EXPONENTIAL)
// // internal ftoa variant for exponential floating-point type, contributed by Martijn Jasperse <m.jasperse@gmail.com>
// static size_t _etoa(out_fct_type out, char* buffer, size_t idx, size_t maxlen, double value, unsigned int prec, unsigned int width, unsigned int flags)
// {
//   // check for NaN and special values
//   if ((value != value) || (value > DBL_MAX) || (value < -DBL_MAX)) {
//     return _ftoa(out, buffer, idx, maxlen, value, prec, width, flags);
//   }

//   // determine the sign
//   const bool negative = value < 0;
//   if (negative) {
//     value = -value;
//   }

//   // default precision
//   if (!(flags & FLAGS_PRECISION)) {
//     prec = PRINTF_DEFAULT_FLOAT_PRECISION;
//   }

//   // determine the decimal exponent
//   // based on the algorithm by David Gay (https://www.ampl.com/netlib/fp/dtoa.c)
//   union {
//     uint64_t U;
//     double   F;
//   } conv;

//   conv.F = value;
//   int exp2 = (int)((conv.U >> 52U) & 0x07FFU) - 1023;           // effectively log2
//   conv.U = (conv.U & ((1ULL << 52U) - 1U)) | (1023ULL << 52U);  // drop the exponent so conv.F is now in [1,2)
//   // now approximate log10 from the log2 integer part and an expansion of ln around 1.5
//   int expval = (int)(0.1760912590558 + exp2 * 0.301029995663981 + (conv.F - 1.5) * 0.289529654602168);
//   // now we want to compute 10^expval but we want to be sure it won't overflow
//   exp2 = (int)(expval * 3.321928094887362 + 0.5);
//   const double z  = expval * 2.302585092994046 - exp2 * 0.6931471805599453;
//   const double z2 = z * z;
//   conv.U = (uint64_t)(exp2 + 1023) << 52U;
//   // compute exp(z) using continued fractions, see https://en.wikipedia.org/wiki/Exponential_function#Continued_fractions_for_ex
//   conv.F *= 1 + 2 * z / (2 - z + (z2 / (6 + (z2 / (10 + z2 / 14)))));
//   // correct for rounding errors
//   if (value < conv.F) {
//     expval--;
//     conv.F /= 10;
//   }

//   // the exponent format is "%+03d" and largest value is "307", so set aside 4-5 characters
//   unsigned int minwidth = ((expval < 100) && (expval > -100)) ? 4U : 5U;

//   // in "%g" mode, "prec" is the number of *significant figures* not decimals
//   if (flags & FLAGS_ADAPT_EXP) {
//     // do we want to fall-back to "%f" mode?
//     if ((value >= 1e-4) && (value < 1e6)) {
//       if ((int)prec > expval) {
//         prec = (unsigned)((int)prec - expval - 1);
//       }
//       else {
//         prec = 0;
//       }
//       flags |= FLAGS_PRECISION;   // make sure _ftoa respects precision
//       // no characters in exponent
//       minwidth = 0U;
//       expval   = 0;
//     }
//     else {
//       // we use one sigfig for the whole part
//       if ((prec > 0) && (flags & FLAGS_PRECISION)) {
//         --prec;
//       }
//     }
//   }

//   // will everything fit?
//   unsigned int fwidth = width;
//   if (width > minwidth) {
//     // we didn't fall-back so subtract the characters required for the exponent
//     fwidth -= minwidth;
//   } else {
//     // not enough characters, so go back to default sizing
//     fwidth = 0U;
//   }
//   if ((flags & FLAGS_LEFT) && minwidth) {
//     // if we're padding on the right, DON'T pad the floating part
//     fwidth = 0U;
//   }

//   // rescale the float value
//   if (expval) {
//     value /= conv.F;
//   }

//   // output the floating part
//   const size_t start_idx = idx;
//   idx = _ftoa(out, buffer, idx, maxlen, negative ? -value : value, prec, fwidth, flags & ~FLAGS_ADAPT_EXP);

//   // output the exponent part
//   if (minwidth) {
//     // output the exponential symbol
//     out((flags & FLAGS_UPPERCASE) ? 'E' : 'e', buffer, idx++, maxlen);
//     // output the exponent value
//     idx = _ntoa_long(out, buffer, idx, maxlen, (expval < 0) ? -expval : expval, expval < 0, 10, 0, minwidth-1, FLAGS_ZEROPAD | FLAGS_PLUS);
//     // might need to right-pad spaces
//     if (flags & FLAGS_LEFT) {
//       while (idx - start_idx < width) out(' ', buffer, idx++, maxlen);
//     }
//   }
//   return idx;
// }
// #endif  // PRINTF_SUPPORT_EXPONENTIAL
// #endif  // PRINTF_SUPPORT_FLOAT

// // internal vsnprintf
// static int _vsnprintf(out_fct_type out, char* buffer, const size_t maxlen, const char* format, va_list va)
// {
//   unsigned int flags, width, precision, n;
//   size_t idx = 0U;

//   if (!buffer) {
//     // use null output function
//     out = _out_null;
//   }

//   while (*format)
//   {
//     // format specifier?  %[flags][width][.precision][length]
//     if (*format != '%') {
//       // no
//       out(*format, buffer, idx++, maxlen);
//       format++;
//       continue;
//     }
//     else {
//       // yes, evaluate it
//       format++;
//     }

//     // evaluate flags
//     flags = 0U;
//     do {
//       switch (*format) {
//         case '0': flags |= FLAGS_ZEROPAD; format++; n = 1U; break;
//         case '-': flags |= FLAGS_LEFT;    format++; n = 1U; break;
//         case '+': flags |= FLAGS_PLUS;    format++; n = 1U; break;
//         case ' ': flags |= FLAGS_SPACE;   format++; n = 1U; break;
//         case '#': flags |= FLAGS_HASH;    format++; n = 1U; break;
//         default :                                   n = 0U; break;
//       }
//     } while (n);

//     // evaluate width field
//     width = 0U;
//     if (_is_digit(*format)) {
//       width = _atoi(&format);
//     }
//     else if (*format == '*') {
//       const int w = va_arg(va, int);
//       if (w < 0) {
//         flags |= FLAGS_LEFT;    // reverse padding
//         width = (unsigned int)-w;
//       }
//       else {
//         width = (unsigned int)w;
//       }
//       format++;
//     }

//     // evaluate precision field
//     precision = 0U;
//     if (*format == '.') {
//       flags |= FLAGS_PRECISION;
//       format++;
//       if (_is_digit(*format)) {
//         precision = _atoi(&format);
//       }
//       else if (*format == '*') {
//         const int prec = (int)va_arg(va, int);
//         precision = prec > 0 ? (unsigned int)prec : 0U;
//         format++;
//       }
//     }

//     // evaluate length field
//     switch (*format) {
//       case 'l' :
//         flags |= FLAGS_LONG;
//         format++;
//         if (*format == 'l') {
//           flags |= FLAGS_LONG_LONG;
//           format++;
//         }
//         break;
//       case 'h' :
//         flags |= FLAGS_SHORT;
//         format++;
//         if (*format == 'h') {
//           flags |= FLAGS_CHAR;
//           format++;
//         }
//         break;
// #if defined(PRINTF_SUPPORT_PTRDIFF_T)
//       case 't' :
//         flags |= (sizeof(ptrdiff_t) == sizeof(long) ? FLAGS_LONG : FLAGS_LONG_LONG);
//         format++;
//         break;
// #endif
//       case 'j' :
//         flags |= (sizeof(intmax_t) == sizeof(long) ? FLAGS_LONG : FLAGS_LONG_LONG);
//         format++;
//         break;
//       case 'z' :
//         flags |= (sizeof(size_t) == sizeof(long) ? FLAGS_LONG : FLAGS_LONG_LONG);
//         format++;
//         break;
//       default :
//         break;
//     }

//     // evaluate specifier
//     switch (*format) {
//       case 'd' :
//       case 'i' :
//       case 'u' :
//       case 'x' :
//       case 'X' :
//       case 'o' :
//       case 'b' : {
//         // set the base
//         unsigned int base;
//         if (*format == 'x' || *format == 'X') {
//           base = 16U;
//         }
//         else if (*format == 'o') {
//           base =  8U;
//         }
//         else if (*format == 'b') {
//           base =  2U;
//         }
//         else {
//           base = 10U;
//           flags &= ~FLAGS_HASH;   // no hash for dec format
//         }
//         // uppercase
//         if (*format == 'X') {
//           flags |= FLAGS_UPPERCASE;
//         }

//         // no plus or space flag for u, x, X, o, b
//         if ((*format != 'i') && (*format != 'd')) {
//           flags &= ~(FLAGS_PLUS | FLAGS_SPACE);
//         }

//         // ignore '0' flag when precision is given
//         if (flags & FLAGS_PRECISION) {
//           flags &= ~FLAGS_ZEROPAD;
//         }

//         // convert the integer
//         if ((*format == 'i') || (*format == 'd')) {
//           // signed
//           if (flags & FLAGS_LONG_LONG) {
// #if defined(PRINTF_SUPPORT_LONG_LONG)
//             const long long value = va_arg(va, long long);
//             idx = _ntoa_long_long(out, buffer, idx, maxlen, (unsigned long long)(value > 0 ? value : 0 - value), value < 0, base, precision, width, flags);
// #endif
//           }
//           else if (flags & FLAGS_LONG) {
//             const long value = va_arg(va, long);
//             idx = _ntoa_long(out, buffer, idx, maxlen, (unsigned long)(value > 0 ? value : 0 - value), value < 0, base, precision, width, flags);
//           }
//           else {
//             const int value = (flags & FLAGS_CHAR) ? (char)va_arg(va, int) : (flags & FLAGS_SHORT) ? (short int)va_arg(va, int) : va_arg(va, int);
//             idx = _ntoa_long(out, buffer, idx, maxlen, (unsigned int)(value > 0 ? value : 0 - value), value < 0, base, precision, width, flags);
//           }
//         }
//         else {
//           // unsigned
//           if (flags & FLAGS_LONG_LONG) {
// #if defined(PRINTF_SUPPORT_LONG_LONG)
//             idx = _ntoa_long_long(out, buffer, idx, maxlen, va_arg(va, unsigned long long), false, base, precision, width, flags);
// #endif
//           }
//           else if (flags & FLAGS_LONG) {
//             idx = _ntoa_long(out, buffer, idx, maxlen, va_arg(va, unsigned long), false, base, precision, width, flags);
//           }
//           else {
//             const unsigned int value = (flags & FLAGS_CHAR) ? (unsigned char)va_arg(va, unsigned int) : (flags & FLAGS_SHORT) ? (unsigned short int)va_arg(va, unsigned int) : va_arg(va, unsigned int);
//             idx = _ntoa_long(out, buffer, idx, maxlen, value, false, base, precision, width, flags);
//           }
//         }
//         format++;
//         break;
//       }
// #if defined(PRINTF_SUPPORT_FLOAT)
//       case 'f' :
//       case 'F' :
//         if (*format == 'F') flags |= FLAGS_UPPERCASE;
//         idx = _ftoa(out, buffer, idx, maxlen, va_arg(va, double), precision, width, flags);
//         format++;
//         break;
// #if defined(PRINTF_SUPPORT_EXPONENTIAL)
//       case 'e':
//       case 'E':
//       case 'g':
//       case 'G':
//         if ((*format == 'g')||(*format == 'G')) flags |= FLAGS_ADAPT_EXP;
//         if ((*format == 'E')||(*format == 'G')) flags |= FLAGS_UPPERCASE;
//         idx = _etoa(out, buffer, idx, maxlen, va_arg(va, double), precision, width, flags);
//         format++;
//         break;
// #endif  // PRINTF_SUPPORT_EXPONENTIAL
// #endif  // PRINTF_SUPPORT_FLOAT
//       case 'c' : {
//         unsigned int l = 1U;
//         // pre padding
//         if (!(flags & FLAGS_LEFT)) {
//           while (l++ < width) {
//             out(' ', buffer, idx++, maxlen);
//           }
//         }
//         // char output
//         out((char)va_arg(va, int), buffer, idx++, maxlen);
//         // post padding
//         if (flags & FLAGS_LEFT) {
//           while (l++ < width) {
//             out(' ', buffer, idx++, maxlen);
//           }
//         }
//         format++;
//         break;
//       }

//       case 's' : {
//         const char* p = va_arg(va, char*);
//         unsigned int l = _strnlen_s(p, precision ? precision : (size_t)-1);
//         // pre padding
//         if (flags & FLAGS_PRECISION) {
//           l = (l < precision ? l : precision);
//         }
//         if (!(flags & FLAGS_LEFT)) {
//           while (l++ < width) {
//             out(' ', buffer, idx++, maxlen);
//           }
//         }
//         // string output
//         while ((*p != 0) && (!(flags & FLAGS_PRECISION) || precision--)) {
//           out(*(p++), buffer, idx++, maxlen);
//         }
//         // post padding
//         if (flags & FLAGS_LEFT) {
//           while (l++ < width) {
//             out(' ', buffer, idx++, maxlen);
//           }
//         }
//         format++;
//         break;
//       }

//       case 'p' : {
//         width = sizeof(void*) * 2U;
//         flags |= FLAGS_ZEROPAD | FLAGS_UPPERCASE;
// #if defined(PRINTF_SUPPORT_LONG_LONG)
//         const bool is_ll = sizeof(uintptr_t) == sizeof(long long);
//         if (is_ll) {
//           idx = _ntoa_long_long(out, buffer, idx, maxlen, (uintptr_t)va_arg(va, void*), false, 16U, precision, width, flags);
//         }
//         else {
// #endif
//           idx = _ntoa_long(out, buffer, idx, maxlen, (unsigned long)((uintptr_t)va_arg(va, void*)), false, 16U, precision, width, flags);
// #if defined(PRINTF_SUPPORT_LONG_LONG)
//         }
// #endif
//         format++;
//         break;
//       }

//       case '%' :
//         out('%', buffer, idx++, maxlen);
//         format++;
//         break;

//       default :
//         out(*format, buffer, idx++, maxlen);
//         format++;
//         break;
//     }
//   }

//   // termination
//   out((char)0, buffer, idx < maxlen ? idx : maxlen - 1U, maxlen);

//   // return written chars without terminating \0
//   return (int)idx;
// }

// ///////////////////////////////////////////////////////////////////////////////

// int printf(const char* format, ...)
// {
//   va_list va;
//   va_start(va, format);
//   char buffer[1];
//   const int ret = _vsnprintf(_out_char, buffer, (size_t)-1, format, va);
//   va_end(va);
//   return ret;
// }

// int sprintf(char* buffer, const char* format, ...)
// {
//   va_list va;
//   va_start(va, format);
//   const int ret = _vsnprintf(_out_buffer, buffer, (size_t)-1, format, va);
//   va_end(va);
//   return ret;
// }

// int snprintf(char* buffer, size_t count, const char* format, ...)
// {
//   va_list va;
//   va_start(va, format);
//   const int ret = _vsnprintf(_out_buffer, buffer, count, format, va);
//   va_end(va);
//   return ret;
// }

// int vprintf(const char* format, va_list va)
// {
//   char buffer[1];
//   return _vsnprintf(_out_char, buffer, (size_t)-1, format, va);
// }

// int vsnprintf(char* buffer, size_t count, const char* format, va_list va)
// {
//   return _vsnprintf(_out_buffer, buffer, count, format, va);
// }

// int fctprintf(void (*out)(char character, void* arg), void* arg, const char* format, ...)
// {
//   va_list va;
//   va_start(va, format);
//   const out_fct_wrap_type out_fct_wrap = { out, arg };
//   const int ret = _vsnprintf(_out_fct, (char*)(uintptr_t)&out_fct_wrap, (size_t)-1, format, va);
//   va_end(va);
//   return ret;
// }

// #endif

/*                                       第三种，end                                      */