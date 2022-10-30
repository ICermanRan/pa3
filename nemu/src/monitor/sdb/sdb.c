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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"


static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);


static int cmd_s(char *args) {
	/* extract the first argument */
  char *arg = strtok(args, " ");//N = times
  int N;
  N = atoi(arg);//turn %s to %d
  //printf("%s", arg);

  if(arg == NULL)
    cpu_exec(1);
  else
    cpu_exec(N);

	return 0;
}



static int cmd_info(char *args) {
		/* extract the first argument */

	char *arg = strtok(args, " ");//arg = "r"

//	printf("%s\n", arg);
	if(*arg == 'r')
		isa_reg_display();
	else
		printf("Unknown command '%s'\n", arg);
	
	return 0;
	
}



static int cmd_x(char *args) {
	/* extract the first argument */
  char *arg = NULL; //定义分割出来的每个字符串
  char *arg1 = NULL;

  int i;
  int base_addr;
 // int value,j;
 // uint8_t word_size = 0x00000008;
 
  arg = strtok(args, " ");// 在第一次分割时，需要指定源字符串
  i = atoi(arg);
  printf("%d\n", i);
   
  arg1 = strtok(NULL, "\0");//往后的调用则将参数s设置成NULL
  printf("%s\n", arg1);


  char arr[50];
  int a = 0;

  while(*arg1 != '\0')
    {
        arr[a] = *arg1;
        a++;
        arg1++;
    }

  int b;
  int y = strlen(arr);
  int num[y-1];
    for(b = 2; b <= y-1; b++)
    {
        num[b-2] = arr[b] - '0';
        printf("%d\n", num[b-2]);
    } ////用ASCII码值做计算，得到的值正好为对应的数字

    
  
  long m = 1;
  long long sum = 0; 
  int c;
    for(c = b-3; c >=0; c--)
    {
      sum += num[c]*m;
      m *= 16;
    }

   base_addr = sum;//分离出起始地址int类型
   printf("%#x\n", base_addr);
/*
  for(j = 0; j < i; j++)
  {
    value = vaddr_read(base_addr + j*word_size, word_size);
    printf("%d\n", value);
  }
 
*/
  return 0;
}


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
	
  /* TODO: Add more commands */
  { "si", "Step", cmd_s},
  { "info", "printf message", cmd_info},
  { "x", "printf memory message, example:x 10 0x80000000", cmd_x},
  //{ "p", "eval the expr", cmd_p},
  //{ "w", "set the watchpoint", cmd_w},
  //{ "d", "delet the watchpoint", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
