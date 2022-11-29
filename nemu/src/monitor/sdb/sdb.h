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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

//static int eval(int p, int q);

word_t vaddr_read(vaddr_t addr, int len);//声明vaddr_read
word_t paddr_read(paddr_t addr, int len);
word_t expr(char *e, bool *success);


int test_change();

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char exp[32];          //存储算数表达式
  uint64_t old_value;          //旧值
  uint64_t new_value;          //新值

  /* TODO: Add more members if necessary */
} WP;

WP* new_wp(); //函数定义


#endif
