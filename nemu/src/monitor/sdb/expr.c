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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
  TK_num = 255
}; //枚举类型，标识符的作用范围是全局的

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */
    {"\\(", '('},          // left brackets,   token_type == 40
    {"\\)", ')'},         // right brackets,  token_type == 41
    {"\\/", '/'},         // minus,           token_type == 47
    {"\\*", '*'},         // multiply,        token_type == 42
    {"[0-9]", TK_num}, // number 0-9
    {"\\-", '-'},         // reduce,          token_type == 45
    {"([+-])", '+'},         // plus,            token_type == 43
    {" +", TK_NOTYPE},    // spaces(空格串)
    {"==", TK_EQ},        // equal
};

#define NR_REGEX ARRLEN(rules) //NR_REGEX = rules中定义的token类型数目

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED); //编译正则表达式regcomp(),执行成功返回0
    //printf("&re[i] = %s",re.);
                                                         //&re[i]一个结构体数据类型，用来存放编译后的正则表达式
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;//存放匹配文本串位置信息

  //printf("e = %s\n", e);
  nr_token = 0;
  while (e[position] != '\0') {
    // printf("e[position] = %d\n",e[position]);
   
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        printf("e = %s\n", e);
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
        
      //  printf("i = %d, rules[i] = %s\n",  i, rules[i].regex);
        nr_token++;
      //  printf("nr_token = %d\n", nr_token);

        position += substr_len;
      //  printf("position = %d\n", position);
      //  printf("rules[i].token_type = %d\n", rules[i].token_type);


        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
          int j;
        switch (rules[i].token_type) {
          case  '(': 
                    for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  40;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    }
                      // printf("for left: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                      break;

          case ')':  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  41;
                      else if(j == 1)
                        strcpy(tokens[position].str,substr_start);
                    }
                    // printf("for right: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                    break;

          case '/':  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  47;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    } 
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '*':  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  42;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    } 
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '+':  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  43;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    } 
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '-':  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  45;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    } 
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case TK_num:  
                   for(j = 0; j < 2; j++)
                    {
                      if(j == 0)
                        tokens[position].type =  TK_num;
                      else if(j == 1)
                        strcpy(tokens[position].str, substr_start);
                    } 
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;


          //default: TODO();
        }
      
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  int c;
  for(c = 0; c <= position; c++)
  {
     printf("outloop： tokens[%d].type = %d ", c, tokens[c].type);
     printf("tokens[%d].str = %s\n", c,tokens[c].str);
  }

  return true;
}

/* void store_c (int tokens_type, int position, char arr) 
{
  int j;
   for(j = 0; j < 2; j++)
      {
        if(j == 0)
          tokens[position].type =  tokens_type;
        else if(j == 1)
           strcpy(tokens[position].str, arr);
       } 
  return 0;
} */

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
 // TODO(); 记得取消注释！！！


  return 0;
}
