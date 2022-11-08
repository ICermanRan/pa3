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
static void  gen_num();//产生随机数
static  void  gen_l();
static  void  gen_r();
static void  gen_rand_op();
static void gen_rand_expr();

//全局变量定义
static int buf_addr = 0;

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

static void  gen_num()//产生随机数
{
  char str[16] = {0};
  //char * str = NULL;
  srand((unsigned)time(NULL));
  uint32_t number;
  number = rand();
 // printf("number = %d", number);
  sprintf(str, "%d", number);//利用sprintf将number转为字符
 // itoa(number, str, 10);
  int l = strlen(str);
  //char num[strlen(str)];
  int i;
  for(i = 0; i < l; i++)
  {
    buf_addr++;
    buf[buf_addr] = str[i];  
  }

  //return 0;
}

static  void  gen_l()
{
  char left = '(';
  buf_addr++;
  buf[buf_addr] = left;
  //return 0;
}

static  void  gen_r()
{
  char  right = ')';
  buf_addr++;
  buf[buf_addr] = right;
  //return 0;
}


static void  gen_rand_op()
{
  srand((unsigned)time(NULL));
  unsigned int op_num;
  op_num = rand() % 3;//产生范围0-3的随机数
  char op = ' ';

  switch (op_num)
  {
  case 0:
        op = '+';
        break;

  case 1:
        op = '-';
        break;
  case 2:
        op = '*';
        break;

  case 3:
        op = '/';
        break;
  
 default:
        break;
  }
  buf_addr++;
  buf[buf_addr] = op;
  //return 0;
}

static void gen_rand_expr() {
 // buf[0] = '\0';
  switch(choose(3))
  {
    case 0: 
           gen_num();
          //  sprintf(buf[buf_addr], "%c", gen_num());
          //  sprintf(buf, "%s", gen_num());
           break;
    case 1: 
            gen_l();
            // sprintf(buf[buf_addr], "%c", gen_l());
            gen_rand_expr();
            // sprintf(buf[buf_addr], "%c", gen_r());
            gen_r();
            break;
    case 2:
            // sprintf(buf[buf_addr], "%c", gen_rand_op());
            gen_rand_op();
            break;
  default:
            gen_rand_expr();
           // sprintf(buf[buf_addr], "%c", gen_rand_op());
            gen_rand_op();
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

    FILE *fp = fopen("/tmp/.code.c", "w");//打开文件，读文件到内存，返回文件信息结构指针
    assert(fp != NULL);//断言，如果fp==NULL，则程序终止
    fputs(code_buf, fp);//将一行字符串写入文件，它将字符串输出到流。
    fclose(fp);//关闭已经使用fopen打开成功的文件

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");//用system函数进行gcc命令
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");//Create a new stream connected to a pipe running the given command.
    assert(fp != NULL);           //用创建管道的方式启动一个进程, 并调用 shell. 

    unsigned int result;
    if(fscanf(fp, "%d", &result) == 1);
    pclose(fp);

    printf("%u %s\n", result, buf);
   }
  return 0;
}
