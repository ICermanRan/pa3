#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <signal.h>

void expr_test()
{

/* Start engine. */
  /********测试表达式求值-start********/
  	FILE *fp;
  	fp = fopen("/home/ran/ysyx/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
  	if(fp == NULL)
	 {
		printf("cannot open this file\n");
   		return 0;
	 }
	
  	_Bool * success = NULL;
  	uint64_t result;
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
		printf("result = %lu\n", result);
      	expr(expr_ready,success);
		// printf("ans = %lu", ans);
		// int pass_number = 0;

		// if(result == ans)
		//  {
		//    pass_number++;
		//    printf("pass_number = %d\n", pass_number);
		//  }
		memset(expr_2, '\0', sizeof(expr_2));
      }
    }
	  fclose(fp);//关闭数据文件
 /********测试表达式求值-end********/


}

