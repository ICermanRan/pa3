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
#include <signal.h>

//函数声明
static int choose(int a);
static void  gen_num();//产生随机数
static  void  gen_l();
static  void  gen_r();
static void  gen_rand_op();
static void gen_rand_expr();
// static void rebuild();

//全局变量定义
 uint64_t result;
static int buf_addr = 0;
static int cnt_expr = 0;
//static int cnt_op = 0;
// this should be enough
// static char buf[65536] = {};
// static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char buf[65536] = {};
static char code_buf[65536+128] = {}; 
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned long int result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

static int choose(int a)
{
  //srand(time(0));
  uint64_t cho = rand() % a;//a=3
  //  int cho = 1;
  // printf("cho = %d\n", cho);
  return cho;
}

static void  gen_num()//产生随机数
{
  char str[16] = {0};
  //char * str = NULL;
 // srand((unsigned)time(NULL));
  // uint32_t number;
  long unsigned int number;
  number = rand() % 1023;
  // printf("number = %d\n", number);
  sprintf(str, "%lu", number);//利用sprintf将number转为字符
 // itoa(number, str, 10);
  int l = strlen(str);
  //char num[strlen(str)];
  int i;
  for(i = 0; i < l; i++)
  {
    if(buf_addr == 0)
    {
      buf[buf_addr] = str[i];  
      // printf("buf[%d] = %c\n", buf_addr,str[i]);
      buf_addr++;
   }
    else
    {
      buf[buf_addr] = str[i];  
      // printf("buf[%d] = %c\n", buf_addr,str[i]);
      buf_addr++;
    }
  }

  //  buf[buf_addr] = 'l';
  //  buf_addr++;
  //  buf[buf_addr] = 'u';
  //  buf_addr++;
  //return 0;
}

static  void  gen_l()
{
  char left = '(';
  if(buf_addr == 0)
  {
   buf[buf_addr] = left;
   buf_addr++;
  }
  else
  {
   buf[buf_addr] = left;
   buf_addr++;
  }
  
  // printf("产生左括号\n");
  // printf("buf_addr = %d\n", buf_addr);
  // printf("buf[buf_addr] = %c\n",  buf[buf_addr]);
  //return 0;
}

static  void  gen_r()
{
  char  right = ')';
   if(buf_addr == 0)
  {
   buf[buf_addr] = right;
   buf_addr++;
  }
  else
  {
   buf[buf_addr] = right;
   buf_addr++;
  }
  // printf("产生右括号\n");
  // printf("buf[%d] = %c\n", buf_addr, buf[buf_addr]);
  //return 0;
}


static void  gen_rand_op()
{
  //srand((unsigned)time(NULL));
  int op_num;
  op_num = rand() % 4;//产生范围0-3的随机数
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

  if(buf_addr == 0)
  {
   buf[buf_addr] = op;
   buf_addr++;
  }
  else
  {
  // printf("buf_addr = %d\n", buf_addr);
  buf[buf_addr] = op;
  buf_addr++;
  }
  

}

static void gen_rand_expr() {

  cnt_expr++;//每调用进入一次gen_rand_expr()，则记录一次
  // printf("cnt_expr = %d\n", cnt_expr);

   if((cnt_expr == 40))
  // if((buf_addr == 65530))
    {
     gen_num();
    //  printf("提前结束\n");
     cnt_expr = 0;
     return ;
    }
  else
    {
    switch(choose(3))
    {
    case 0: 
           gen_num();
           break;
    case 1: 
            gen_l();
            gen_rand_expr();
            gen_r();
            break;
    case 2:
            gen_rand_expr();
            gen_rand_op();
            gen_rand_expr();
            break;
    default:
            gen_rand_expr();
            gen_rand_op();
            gen_rand_expr();
            break;
    }

    }
 
  
  
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  // printf("argc = %d\n", argc);

  if (argc > 1) 
  {
    sscanf(argv[1], "%d", &loop);//将argv[1]中的字符串转为int,保存在变量loop中
    // printf("loop = %d\n", loop);
  }

  // printf("未进入循环产生之前,loop = %d\n", loop);
  int i;
  for (i = 0; i < loop; i ++)
   {
    memset(buf, '\0', sizeof(buf));
    buf_addr = 0;
    
    gen_rand_expr();

    while(buf_addr > 5000)
    {
      // printf("buf溢出，舍弃这个例子，重新生成\n");
      memset(buf, '\0', sizeof(buf));
      buf_addr = 0;
      gen_rand_expr();
    }
    buf[buf_addr] = '\0';
    // printf("在已经产生完表达式后，循环打印出来\n");
    // printf("buf_addr = %d\n", buf_addr);
    // int x = strlen(buf);
    // printf("buf长度为%d\n",x);
    // printf("buf=%s\n", buf);
    // int j;
    // for(j = 0; j < buf_addr; j++)
    // {
    //   printf("buf[%d] = %c\n", j, buf[j]);
    // }

    sprintf(code_buf, code_format, buf);//把code_format和buf数组的内容相结合，存到code_buf，其中的%s由buf赋值

    //  FILE *fp = fopen("/tmp/.code.c", "w");//把code_buf的内容存入到.code.c，读文件到内存，返回文件信息结构指针
    FILE *fp = fopen("/home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/code.c", "w");
    assert(fp != NULL);//断言，如果fp==NULL，则程序终止
    fputs(code_buf, fp);//将一行字符串写入文件，它将字符串输出到流。
    fclose(fp);//关闭已经使用fopen打开成功的文件

    //  int ret = system("gcc /tmp/.code.c -g -o /tmp/.expr");//用system函数进行gcc命令，对code.c进行编译
    //编译code.c的时候把warning当作error对待，system函数的返回值会有变化，检测到变化就通过continue，重新生成表达式
    int ret = system("gcc /home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/code.c -g -Werror -o  /home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/.expr");  
    //  int ret = system("gcc /home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/code.c -g  -o  /home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/.expr");
    //  printf("ret = %d\n", ret);
    if (ret != 0) 
      continue;
    else if (ret == 256)
      continue;

      // fp = popen("/tmp/", "r");//popen()会建立管道连到子进程的标准输出设备或标准输入设备，然后返回一个文件指针
    fp = popen("/home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/.expr", "r");
    assert(fp != NULL);           //随后进程便可利用此文件指针来读取子进程的输出设备或是写入到子进程的标准输入设备中。
                                  //这里为r,代表读取。
                                  //这里的作用是把code.c编译的结果，即定义result=算数表达式，得到的result的值读取到main.c
    
    
    //  uint64_t result;
    //fscanf(fp, "%d", &result);
    int a = 0;
    if(fscanf(fp, "%lu", &result))
    {
      pclose(fp);
      for(a = 0; a <=buf_addr; a++)
      {
        if(buf[a] =='l')
          buf[a] = ' ';
        else if(buf[a] =='u')
          buf[a] = ' ';
        else
          buf[a] = buf[a];
      }

      // printf("result = %lu  buf = %s\n", result, buf);//打印表达式及其结果
      printf("%lu %s\n", result, buf);
      // printf("result = %ld\n", result);//打印表达式及其结果
    }
    
  
   }
 
  return 0;
}

