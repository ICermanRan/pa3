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

#include <common.h>
 #include </home/ran/ysyx/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();



int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  /********测试表达式求值-start********/
  	FILE *fp;
  	fp = fopen("/home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr//build/input", "r");
  	if(fp == NULL)
	 {
		printf("cannot open this file\n");
   		return 0;
	 }
	
  	_Bool * success = NULL;
  	unsigned long result;
	char buf[65536] = {};
	char dtm[65536];
	char expr_2[65536];
	char *arg = NULL; 
	char *expr_wrong = NULL;
	char *expr_ready = NULL;

	 while (fgets(buf, sizeof(buf), fp) != NULL)
    {
	  strcpy(dtm,buf);//把 buf 所指向的字符串复制到dtm。
	  arg = strtok(dtm, " ");// 在第一次分割时，需要指定源字符串
  	  if(arg != NULL)
      {
		sscanf(dtm,"%lu", &result);//sscanf有局限性，遇到空格就结束了，所以只用于读取result
   	  	expr_wrong = strtok(NULL, "\0");//往后的调用则将参数s设置成NULL
		int strLen = strlen(expr_wrong);
	    // printf("%lu %s\n", result, expr_ready);
		int i;
		for(i = 0; i < strLen-1; i++)
		{
			expr_2[i] = *(expr_wrong+i);
		}

		expr_ready = expr_2;
		printf("expr = %s\n", expr_ready);
      	uint64_t ans = expr(expr_ready,success);
		int pass_number = 0;

		if(result == ans)
		 {
		   pass_number++;
		   printf("pass_number = %d\n", pass_number);
		 }
		memset(expr_2, '\0', sizeof(expr_2));
      }
    }
	  fclose(fp);//关闭数据文件
 /********测试表达式求值-end********/
  
  
  engine_start();
  


 // return is_exit_status_bad();
}
