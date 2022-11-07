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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

//函数声明
static int choose(int a);
static char * gen_num();//产生随机数
static  char * gen_left();
static  char * gen_right();
static char * gen_rand_op();
static void gen_rand_expr();

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int choose(int a)
{
  srand(time(NULL));
  int cho = rand() % (a-1);

  return cho;
}

static char * gen_num()//产生随机数
{
  char * str = NULL;
  srand((unsigned)time(NULL));
  uint32_t number;
  number = rand();
 // printf("number = %d", number);
  sprintf(str, "%d", number);//利用sprintf将number转为字符串


  return str;
}

static  char * gen_left()
{
  char * left = "(";
  return left;
}

static  char * gen_right()
{
 char * right = ")";
  return right;
}


static char * gen_rand_op()
{
  srand((unsigned)time(NULL));
  unsigned int op_num;
  op_num = rand() % 3;//产生范围0-3的随机数
  char * op = NULL;

  switch (op_num)
  {
  case 0:
        op = "+";
        break;

  case 1:
        op = "-";
        break;
  case 2:
        op = "*";
        break;

  case 3:
        op = "/";
        break;
  
 default:
        break;
  }

  return op;
}

static void gen_rand_expr() {
 // buf[0] = '\0';
  switch(choose(3))
  {
    case 0: 
           // gen_num();
           strncpy(buf,gen_num(),nonnull(gen_num()));
           break;
    case 1: 
            //gen('(');
            strncpy(buf, gen_left(), strlen(gen_left()));
            gen_rand_expr();
            strncpy(buf, gen_rignt(), strlen(gen_rignt()));
           // gen(')');
            break;
    case 2:
            strncpy(buf,gen_rand_op(),strlen(gen_rand_op()));
  default:
            gen_rand_expr();
            strncpy(buf, gen_rand_op(),strlen( gen_rand_op()));
            gen_rand_expr();
            break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;

  if (argc > 1) 
  {
    sscanf(argv[1], "%d", &loop);//将argv[1]中的字符串转为int,保存在变量loop中
  }

  int i;
  for (i = 0; i < loop; i ++)
   {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);//把code_format的内容存到code_buf，其中的%s由buf赋值

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    unsigned int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
   }
  return 0;
}
