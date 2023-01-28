#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

//计算字符串长度(不包括终止的空字节（“\0”）)，并返回s指向的字符串中的字节数
size_t strlen(const char *s) 
{                           
  /*实现思路：通过指针访问字符串，计数器读取字符串长度*/
  size_t cnt = 0;
  while(*s != '\0')
  {
    cnt++;
    s++;
  }
  return cnt;
  //panic("Not implemented");
}

//将src指向的字符串（包括终止的空字节（“\0”））复制到dst指向的缓冲区。
//返回指向目标字符串dst的指针
//字符串不能重叠，目标字符串dest必须足够大才能接收副本
char *strcpy(char *dst, const char *src) 
{  
//我们希望的是仅dst指向的内容被修改，但是src指向的内容不被修改
//在进行函数传参的时候，我们有时会将源头参数和终点参数弄反，这时
//程序就会出现错误，我们为了保护源头参数，在其前面加入const可保证其修饰的值不能被修改
  
  char *tempptr = NULL;
  if(dst == NULL || src == NULL)
    return NULL;
  if(dst == src)
    return dst;

  tempptr = dst;
  while( (*dst++ = *src++) != '\0') 
    {
      //每次src和dest的地址移动一个字节，再进行解引用赋值，
      //当*src = '\0'的时候，循环停止，同时*dest也被赋值
      //注意后加加是先加加再使用
      ;
    }
  return tempptr;

  //panic("Not implemented");
}


//strncpy()与strcpy()类似，只是最多复制n个src字节
//如果src的长度小于n，strncpy（）将向dest写入额外的空字节，以确保总共写入n个字节。
char *strncpy(char *dst, const char *src, size_t n) 
{
  size_t i;
  
  for (i = 0; ((i < n) && (src[i] != '\0')); i++)
    dst[i] = src[i];
  for( ; i < n; i++)
    dst[i] = '\0';

  return dst;
  //panic("Not implemented");
}

//strcat()将src字符串附加到dest字符串
//覆盖dest末尾的终止空字节（“\0”），然后添加终止空字节。
//字符串不能重叠，dest字符串必须有足够的空间用于结果
char *strcat(char *dst, const char *src) 
{
  char * tempptr = dst;
  assert( (dst != NULL) && (src != NULL)  );//对源地址和目的地址进行断言

  while( *dst != '\0' )//先遍历完目的字符串，指针指向目的字符串最后面
  {
    dst++;
  }
  
  while( (*dst++ = *src++) != '\0')//将源字符串赋给目的字符串
  {
    ;
  }

  return tempptr;
  //panic("Not implemented");
}

//把 str1 所指向的字符串和 str2 所指向的字符串进行比较
//str1=str2返回0, 若str1>str2返回正数, str1<str2返回负数
int strcmp(const char *s1, const char *s2)
{
  // int ret = 0;
  assert(s1 != NULL && s2 != NULL);
   /*如果字符串全部相等，那么循环结束两个字符串都到达'\0',相减为0，
   如果开始循环到中间发现某个位置的字符不一样，
    那么就将该位置的两个字符ASCII值相减*/
  while( (*s1 != '\0') && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  
  return *s1 - *s2;
  
}

//与strcmp()类似，但最多只比较前n个字节
int strncmp(const char *s1, const char *s2, size_t n) 
{
  int ret = 0;
  int i = 0;
  for( ; i < n; i++)
  {
    ret = *(s1+i) - *(s2+i);
    if(ret != 0)
      break;
  }
  
  return ret;
  
  //panic("Not implemented");
}

//memset()复制字符 c（一个无符号字符）
//到参数 str 所指向的字符串的前 n 个字符
void *memset(void *s, int c, size_t n) 
{
  const unsigned char uc = c;
  unsigned char * su;

  for(su = s; 0 < n; ++su,--n)
    *su = uc;

  return s;
 

}

//将n个字节从内存区域src复制到内存区域dst
//如果目标区域和源区域有重叠的话，memmove() 能够保证源串在被覆盖之前
//将重叠区域的字节拷贝到目标区域中，复制后源区域的内容会被更改。
void *memmove(void *dst, const void *src, size_t n) 
{
 // this function can be uesd for overlapping areas.
  if (dst <= src) {
    // ----|dst----------|src---------|----------
    char *pdst = (char *) dst;
    char *psrc = (char *) src;
    for(size_t i=0; i<n; i++){
      *pdst++ = *psrc++;
    }
  } 
  else {
    // ----|src----------|dst---------|----------
    char *pdst = (char *) dst + n;
    char *psrc = (char *) src + n;
    for(size_t i=0; i<n; i++){
      *--pdst = *--psrc;
    }
  }
  return dst;
  //panic("Not implemented");
}

//memcpy()函数将n个字节从内存区域src复制到内存区域dest
//返回指向dst的指针
//记忆区域不得重叠。如果内存区域重叠，请使用memmove
void *memcpy(void *out, const void *in, size_t n) 
{
  char *pout = (char *) out;
  const char *pin = (const char *) in;

  for(size_t i = 0; i < n; i++)
  {
    *pout++ = *pin++;
  }
  
  return out;

  //panic("Not implemented");
}

//把存储区 str1 和存储区 str2 的前 n 个字节进行比较
////str1=str2返回0, 若str1>str2返回正数, str1<str2返回负数
int memcmp(const void *s1, const void *s2, size_t n) 
{
  int ret = 0;
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  for(size_t i = 0; i < n; i++)
  {
    ret = *(p1 + i) - *(p2 + i);
    if(ret != 0)
      break;
  }

  return ret;  
  //panic("Not implemented");
}

#endif
