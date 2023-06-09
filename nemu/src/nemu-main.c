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
#include <SDL2/SDL.h>
#include "/home/ran/ysyx/ysyx-workbench/nemu/include/device/map.h"
//#include "sdb.h"
#include "expr-test.h"


void expr_test();
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();





int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);	//将客户程序读入到客户计算机中，进行一些和monitor相关的初始化工作
#endif

//   expr_test();			//是否进行表达式求值测试
  
  /* Start engine. */
  // engine_start() -> sdb_mainloop()
  // 其中会输出命令提示符, 提示用户输出SDB的命令
  engine_start();

/*因为框架代码存在开启device后导致内存泄漏的问题，故调用自定义的destroy_screen函数，减少部分内存泄漏*/
  // destroy_screen();

  return is_exit_status_bad();
}
