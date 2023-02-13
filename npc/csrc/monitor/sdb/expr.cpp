#include "../include/isa.h"

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdio.h>
#include <string.h>

enum {
  TK_NOTYPE = 256, TK_EQ = 257,

  /* TODO: Add more token types */
  TK_num = 255, TK_UNEQ = 258, TK_AND = 259, TK_NEG = 260,
  TK_HEX = 261, TK_REG = 262, TK_DEREF = 263
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
    // {"[1-9][0-9]*", TK_num}, // number(无法检测0)
    {"0[xX][0-9a-fA-F]+", TK_HEX}, //hexadecimal-number    为什么把十六进制放在十进制前面呢？  因为匹配规则是从ruls数组从头开始一个一个试，先遇见且匹配的就先认定
    {"[0-9]+", TK_num}, // number(和十六进制开头的0x冲突)
    // {"^[0-9]*$", TK_num}, // number
    {"\\-", '-'},         // reduce,          token_type == 45
    {"\\+", '+'},         // plus,            token_type == 43
    {" +", TK_NOTYPE},    // spaces(空格串)
    {"==", TK_EQ},        // equal
    {"!=", TK_UNEQ},      // unequal
    {"&&", TK_AND},        //and
    {"-", TK_NEG},         //negative
    {"\\*", TK_DEREF},       //指针解引用(dereference)
    {"\\$[\\$]?[a-z0-9]+", TK_REG}
    // {"$[a-z0-9$]{1,3}", TK_REG}
    //  {"\\$", '$'}
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
