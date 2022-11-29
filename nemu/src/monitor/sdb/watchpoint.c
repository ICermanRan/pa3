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

//把监视点结构体定义放在了sdb.h中，方便各个.c文件调用
// typedef struct watchpoint {
//   int NO;
//   struct watchpoint *next;
//   char exp[32];          //存储算数表达式
//   // uint64_t old_value;          //旧值
//   uint64_t new_value;          //新值

//   /* TODO: Add more members if necessary */
// } WP;



static WP wp_pool[NR_WP] = {};        //本质就是一个WP类型的数组？
static WP *head = NULL, *free_ = NULL;

// WP* new_wp();
int free_wp(WP *wp);

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
WP* new_wp(char *exp)
{
  if(free_ == NULL) //没有空闲监视点结构
  {
    printf("Erro!free is null\n");
    assert(0);
  }
    
  WP *temp = free_;
  free_ =  free_->next;
  temp->next = NULL;

  // printf("成功从free链表截取了一个节点出来\n");

  bool success = false;
  strcpy(temp->exp, exp);//将存储的表达式传给返回的空闲的监视点结构
  temp->old_value = expr(temp->exp, &success); //调用expr函数计算传入temp的表达式,并返回结果赋给new_value
  assert(success);
  // temp->NO = NO;//存储创建的监视点的序号

  if(head == NULL)  //若head链表为空表
  {
    head = temp;    //将该节点设为头节点
  }
  else              //head != NULL,则将该节点接到head链表的最后一个位置
  {
    WP *p = head;
    while(p->next != NULL)  //一直移动到head链表表尾
      {
        p = p->next;
      }
    p->next = temp; //将该节点接到head链表的最后一个位置
  }

  return temp;
}


/*函数功能:将形式参数wp所指的节点归还到free_链表中,本质就是删除监视点*/
int free_wp(WP *wp)
{
  WP *p = head;
  if(head == NULL)
  {
    printf("Erro!监视点列表为空\n");
    assert(0);
  } 
  
  
  if(wp == NULL)          //若 wp = NULL ，则说明输入有误
  {
    printf("Input something!\n");
  }
  else if(wp->NO == head->NO)     //若 wp = head ，说明wp指向head链表的头节点
  {
    head = head->next;    //让head指针指向下一个结点
    wp->next = free_;     //再将wp所指的节点连到free_链表的第一个位置
    wp->old_value = 0;
    wp->new_value = 0;
    free_ = wp;           //让free_指针指向该节点
  }
  else                    //若 wp 为其它节点
  {
   
    while(p->NO != wp->NO)
      {
        p = p->next;

        if(p == NULL)
          {
            printf("遍历整个监视点列表也没找到要删除的节点\n");
            return 0;
          }
      }
    p->next = wp->next;
    wp->next = free_;     //再将wp所指的节点连到free_链表的第一个位置
    wp->old_value = 0;
    wp->new_value = 0;
    free_ = wp;           //让free_指针指向该节点

  }

  return 1;

}

/*函数功能:扫描所有head链表的监视点，对相应表达式求值，并比较值是否发生变化*/
int test_change()
{
  WP *p = head;
  

  while(p != NULL)  //一直移动到head链表表尾才退出，检测到有变化也会退出
    {
      bool success = false;
      p->new_value = expr(p->exp,&success);//取出每个节点的exp，利用expr()函数对其进行求值

      if(p->new_value != p->old_value)
      {
        //表达式求的新值与旧值不相等
        return 1;
      }
      
      if(p->new_value == p->old_value)
      {
        //表达式求的新值与旧值相等
        p->old_value = p->new_value;//old_value更替为新值
        p = p->next;                //移动到head链表下一个位置
      }  
       
    }   

  return 0;
}


/*函数功能:打印所有head链表的监视点信息*/
void print_wp()
{
  WP *p = head;
  printf("WP_NO\tEXPR\t\tDEX_Value\tHEX_Value\n");
  while(p != NULL)
  {
    printf("%d\t%s %10lu %#010lx\n", p->NO, p->exp, p->old_value, p->old_value);
    p = p->next;
  }

}