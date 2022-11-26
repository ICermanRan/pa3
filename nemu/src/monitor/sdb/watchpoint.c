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
  char exp[32];          //存储算数表达式
  uint64_t old_value;          //旧值
  uint64_t new_value;          //新值

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
// WP* new_wp(char *exp)
// {
//   if(free_ == NULL) //没有空闲监视点结构
//   {
//     printf("Erro!free is null\n");
//     assert(0);
//   }
    
//   WP *temp = free_;
//   free_ =  free_->next;
//   temp->next = NULL;

//   bool success = false;
//   strcpy(temp->exp, exp);//将存储的表达式传给返回的空闲的监视点结构
//   temp->new_value = expr(temp->exp, &success); //调用expr函数计算传入temp的表达式,并返回结果赋给new_value
//   // assert(success);

//   if(head == NULL)  //若head链表为空表
//   {
//     head = temp;    //将
//   }

// }
