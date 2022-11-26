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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[32];          //存储算数表达式
  uint64_t data;          //存储算数表达式的结果

  /* TODO: Add more members if necessary */
} WP;

static WP wp_pool[NR_WP] = {};        //本质就是一个WP类型的数组？
static WP *head = NULL, *free_ = NULL;

WP* new_wp();
void free_wp(WP *wp);

/*函数功能:初始化wp_pool、free、head*/
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;      //初始化完后，head为空指针
  free_ = wp_pool;  //free链表链接完成，但没有存储任何表达式和计算结果
}

/* TODO: Implement the functionality of watchpoint */

/*函数功能:从free_链表中返回一个空闲的监视点结构给head链表，且将表达式及结果赋给该监视点结构体*/
// WP* new_wp(char *expr)
// {
//   if(free_ == NULL)
//     as


// }
