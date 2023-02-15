/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"
#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
  /*add a name*/

};

void isa_reg_display() {
	int i;
	const char *temp = NULL;
  printf("nemu pc = %lx\n", cpu.pc);
	for(i = 0; i < 32; i++)
	{
		temp = regs[i];
		printf("reg %d: %s ,value = %ld or 0x%lx\n", i, temp, cpu.gpr[i], cpu.gpr[i]);
	}
  

}

static int find_string(const char *strs[], const char *str, int len)
{
    int i = 0;
    while(i < len + 1)
    {
      if(strcmp(*strs, str) == 0)
        {
          break;
        }
        i++;
        strs++;
    }
    if(i == len + 1){
        return -1;
    }
    return i;
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int len,j;
  GET_ARRAY_LEN(regs,len);
  // printf("len = %d\n", len);
  j = find_string(regs, s, len);
  // printf("j = %d\n", j);
  word_t reg_value;

  if(j == 33)
    reg_value = cpu.pc;
  else
    {
    reg_value = cpu.gpr[j];
    // printf("cpu.gpr[j] = %lx\n", cpu.gpr[j]);
    // printf("reg_value = %lx\n", reg_value);
    }
  
  return reg_value;
}
