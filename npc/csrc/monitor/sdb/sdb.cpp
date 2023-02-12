// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <readline/readline.h>
// #include <readline/history.h>
// #include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/isa.h"
// #include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/sdb.h"

// static int is_batch_mode = false;

// void init_regex();
// void init_wp_pool();



// /* We use the `readline' library to provide more flexibility to read from stdin. */
// static char* rl_gets() {
//   static char *line_read = NULL;

//   if (line_read) {
//     free(line_read);
//     line_read = NULL;
//   }

//   line_read = readline("(nemu) ");

//   if (line_read && *line_read) {
//     add_history(line_read);
//   }

//   return line_read;
// }

// static int cmd_c(char *args) {
//   cpu_exec(-1);
//   return 0;
// }


// static int cmd_q(char *args) {
//   npc_state.state = NPC_QUIT;   //优雅的退出NEMU标准答案
//   return -1;
// }

// static int cmd_help(char *args);


// static int cmd_s(char *args) {
// 	/* extract the first argument */

//   // printf("args = %s\n", args);
//   int N;
//   if(args == NULL)
//   {
//     N = 1;
//   }
//   else 
//   {
//    N = atoi(args);//turn %s to %d
//   }

//   // printf("N = %d\n", N);
//   Assert(N != 0, "无效的si步数，非法的表达式\n");

//   /*
//     有一点要注意，在有断点触发的时候，要删除掉触发的断点/监视点才能si多步执行，
//     因为触发断点，trace_and_difftest里，状态变为了stop，直接就退出了execute里的循环
//     也就无法多步执行了
//   */
//   cpu_exec(N);

// 	return 0;
// }



// static int cmd_info(char *args) {
// 		/* extract the first argument */

//   //  printf("%s\n", args);
// 	char *arg = strtok(args, " ");//arg = "r"

// //	printf("%s\n", arg);
// 	if(*arg == 'r')       //打印寄存器
// 		isa_reg_display();
//   else if(*arg == 'w')  //打印所有监视点
//     print_wp();
// 	else
// 		printf("Unknown command '%s'\n", arg);
	
// 	return 0;
	
// }



// static int cmd_x(char *args) {
// 	/* extract the first argument */
//   char *arg = NULL; //定义分割出来的每个字符串
//   char *arg1 = NULL;

//   int i;
//   long long base_addr;
//   long long offset_addr = 0x1;
//   int j;
//   long  value;
//   int len = 4;//1: return *(uint8_t  *)addr;
//               // 2: return *(uint16_t *)addr;
//               // 4: return *(uint32_t *)addr;
 
//   arg = strtok(args, " ");// 在第一次分割时，需要指定源字符串
//   i = atoi(arg);
//   //printf(" = %d\n", i);
   
//   arg1 = strtok(NULL, "\0");//往后的调用则将参数s设置成NULL
//   //printf("char base_addr = %s\n", arg1);


//   char arr[100];
//   int a = 0;

//   while(*arg1 != '\0')
//     {
//         arr[a] = *arg1;
//         a++;
//         arg1++;
//     }
// //  printf("a = %d\n",a);


//   int b;
//   int num[a];//数组存储数量=a-2
//     for(b = 2; b <= a-1; b++)
//     {
//         if((arr[b] >= 48) && (arr[b] <= 57))
//           num[b-2] = arr[b] - '0';
//         else if((arr[b] >= 97) && (arr[b] <= 102))
//           num[b-2] = arr[b] - 87;
        
//        // printf("%d, b = %d\n", num[b-2], b);
//     } //用ASCII码值做计算，得到的值正好为对应的数字

//   // printf("b = %d\n", b);
  
//   long m = 1;
//   long long sum = 0; 
//   int c;
//     for(c = b-3; c >=0; c--)
//     {
//      // printf("c=%d ,sum = %lld, m = %ld\n", c,sum, m);
//       sum += num[c]*m;
//       m *= 16;
//     }

//    base_addr = sum;//分离出起始地址int类型
//    printf("base_addr = %#llx\n", base_addr);

//   for(j = 0; j < i; j++)
//   {
//     //value = vaddr_read(base_addr + j*offset_addr, len);
//     value = vaddr_read(base_addr + 4*j*offset_addr, len);
//     printf("addr = %#llx ", base_addr + 4*j*offset_addr);
//     printf("value = %#010lx\n", value);
//   }

//   return 0;
// }

// static int cmd_p(char *args) {
//   bool  success = false;

//   //printf("%s\n", args);//数学表达式以字符串存在args里
//   // uint64_t result =  expr(args,&success);
//   word_t result =  expr(args,&success);
//   // printf("DEX = %lu or HEX = %#010lx\n", result, result);
//   printf("DEX = %lu or HEX = 0x%lx\n", result, result);


//   return 0;
// }

// static int cmd_w(char *args) {
  
//   WP *n_wp = NULL;
//   // n_wp = new_wp(args);//调用这个函数，从free链表中返回一个空闲的监视点结构
//   n_wp = new_wp();//调用这个函数，从free链表中返回一个空闲的监视点结构
//   printf("watchpoint %d: %s is set successfully\n", n_wp->NO, n_wp->exp);
//   return 0;
// }

// static int cmd_d(char *args) {
//   // printf("args =%s\n",args);
//   int num = 0;
//   // char *arg = strtok(NULL," ");
//   // printf("arg =%s\n",arg);
//   sscanf(args, "%d", &num);
//   int d = free_wp(num);//调用这个函数，从head链表中删除一个节点返回到free链表中

//   if(d == 1)
//     printf("delete watchpoint %d successfully\n", num);
//   else
//     printf("there is no watchpoint %d\n", num);
  
//   return 0;
// }

// static struct {
//   const char *name;
//   const char *description;
//   int (*handler) (char *);
// } cmd_table [] = {
//   { "help", "Display information about all supported commands", cmd_help },
//   { "c", "Continue the execution of the program", cmd_c },
//   { "q", "Exit NEMU", cmd_q },
	
//   /* TODO: Add more commands */
//   { "si", "Step", cmd_s},
//   { "info", "printf message", cmd_info},
//   { "x", "printf memory message, example:x 10 0x80000000", cmd_x},
//   { "p", "eval the expr", cmd_p},//表达式求值
//   { "w", "set the watchpoint", cmd_w},
//   { "d", "delet the watchpoint", cmd_d}
// };

// #define NR_CMD ARRLEN(cmd_table)

// static int cmd_help(char *args) {
//   /* extract the first argument */
//   char *arg = strtok(NULL, " ");
//   int i;

//   if (arg == NULL) {
//     /* no argument given */
//     for (i = 0; i < NR_CMD; i ++) {
//       printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
//     }
//   }
//   else {
//     for (i = 0; i < NR_CMD; i ++) {
//       if (strcmp(arg, cmd_table[i].name) == 0) {
//         printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
//         return 0;
//       }
//     }
//     printf("Unknown command '%s'\n", arg);
//   }
//   return 0;
// }

// void sdb_set_batch_mode() { //开启批处理模式函数
//   is_batch_mode = true;
// }


// void sdb_mainloop() {
//   if (is_batch_mode) {
//     cmd_c(NULL);
//     return;
//   }

//   for (char *str; (str = rl_gets()) != NULL; ) {
//     char *str_end = str + strlen(str);

//     /* extract the first token as the command */
//     char *cmd = strtok(str, " ");
//     if (cmd == NULL) { continue; }

//     /* treat the remaining string as the arguments,
//      * which may need further parsing
//      */
//     char *args = cmd + strlen(cmd) + 1;
//     if (args >= str_end) {
//       args = NULL;
//     }

// #ifdef CONFIG_DEVICE
//     extern void sdl_clear_event_queue();
//     sdl_clear_event_queue();
// #endif

//     int i;
//     for (i = 0; i < NR_CMD; i ++) {
//       if (strcmp(cmd, cmd_table[i].name) == 0) {
//         if (cmd_table[i].handler(args) < 0) { return; }
//         break;
//       }
//     }

//     if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
//   }
// }

// void init_sdb() {
//   /* Compile the regular expressions. */
//   init_regex();

//   /* Initialize the watchpoint pool. */
//   init_wp_pool();
// }