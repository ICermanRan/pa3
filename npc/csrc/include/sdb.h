#ifndef __SDB_H__
#define __SDB_H__
#include "common.h"



word_t expr(char *e, bool *success);

//static int eval(int p, int q);

word_t vaddr_read(vaddr_t addr, int len);//声明vaddr_read
word_t paddr_read(paddr_t addr, int len);
word_t expr(char *e, bool *success);


int test_change();
void print_wp();


// 把监视点结构体定义放在了sdb.h中，方便各个.c文件调用
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char exp[32];          //存储算数表达式
  uint64_t old_value;          //旧值
  uint64_t new_value;          //新值

  /* TODO: Add more members if necessary */
} WP;

WP* new_wp(char *exp); //函数定义
int free_wp(int num);//函数定义



#endif

