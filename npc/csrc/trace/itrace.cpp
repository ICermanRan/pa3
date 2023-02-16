#include "common.h"
#ifdef CONFIG_ITRACE
#include "itrace.h"

char iring_buf[16][64];
char logbuf[100];
int  iring_tail = 0;

void show_iringbuf()
{
  Log_red("-----------------iringbuf---------------\n");
  for(int i = 0; i +1 != IRINGBUF_SIZE; i++) 
  {
    if(i == iring_tail)
      printf("--> %s\n", iring_buf[i]);
    else 
      printf("    %s\n", iring_buf[i]);
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

  //存入iring_buf
  strcpy(iring_buf[iring_tail], logbuf);
  iring_tail = (iring_tail + 1) % IRINGBUF_SIZE;

}


#endif