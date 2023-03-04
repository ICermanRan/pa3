#include "common.h"
#ifdef CONFIG_ITRACE
#include "itrace.h"

char iring_buf[16][64];
int now, tot;
char logbuf[128];
int  iring_tail = 0;
// #define IRINGBUF_SIZE (sizeof(iring_buf) / sizeof(iring_buf[0]))
#define IRINGBUF_SIZE 16
#define num_of_buf (sizeof(iring_buf) / sizeof(iring_buf[0])) 

void show_iringbuf()
{
  Log_red("-----------------iringbuf---------------\n");
  // for(int i = 0; i +1 != IRINGBUF_SIZE; i++) 
  for(int i = 0; i <= tot; i++) 
  {
    // if(i == iring_tail)
    if(i == now - 1)
      printf("i=%d --> %s\n", i, iring_buf[i]);
    else 
      printf("i=%d    %s\n", i, iring_buf[i]);
  }
  Log_red("----------------------------------------\n");

}



void itrace(uint32_t pc, uint32_t inst)
{
  char *p = logbuf;
  p += sprintf(p, "%x: ", pc);//pc存到p中
  int ilen = 4;
  int i;
  p += sprintf(p, " %08x ", inst);//高位编址
  disassemble(p, logbuf + sizeof(logbuf) - p,
    pc, (uint8_t *)&inst, 4);//仿照nemu中的写法

  //存入iring_buf(update iringbuf)
  strcpy(iring_buf[now], logbuf);
  now = (now + 1) % num_of_buf;
  printf("--------------->now = %d, 0x%s\n", now, logbuf);
  if(now > tot) tot = now;
  iring_tail = (iring_tail + 1) % IRINGBUF_SIZE;

}


#endif