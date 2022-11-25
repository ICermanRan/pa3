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
#include <stdio.h>
#include <string.h>
#include "/home/ran/ysyx/ysyx-workbench/nemu/include/memory/vaddr.h"

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
    // {"[1-9][0-9]*", TK_num}, // number
    {"[0-9]+", TK_num}, // number
    {"\\-", '-'},         // reduce,          token_type == 45
    {"\\+", '+'},         // plus,            token_type == 43
    {" +", TK_NOTYPE},    // spaces(空格串)
    {"==", TK_EQ},        // equal
    {"!=", TK_UNEQ},      // unequal
    {"&&", TK_AND},        //and
    {"-", TK_NEG},         //negative
    {"\\*", TK_DEREF},       //指针解引用(dereference)
    {"[0][xX][0-9a-fA-F]+", TK_HEX}, //hexadecimal-number
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

typedef struct token {
  int type;
  char str[10000];
} Token;

static Token tokens[10000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

//int num_substr_len = 0;//存放数字字符长度，用于非数字字符存放在tokens数组

 int token_addr = 0;//全局变量，记录tokens数组元素用了多少个
 int token_addrs;
 bool logic = true;//全局变量，用于判断输入的表达式括号是否匹配，不匹配则false给expr函数

 static int eval(int p, int q); //函数声明
 static int main_op(int p, int q);//独属形参tokens_addr
 static int check_parentheses(int p, int q);//括号配对函数声明
 static bool check_surround(int p, int q);//括号包围函数声明
 static bool warn_wrong(bool a);
 //char push(char bracket);//压栈操作函数
 //void pop();		//出栈操作函数


static bool make_token(char *e) {
  int position = 0;
  int i;
  uint64_t value;
 
  regmatch_t pmatch;//存放匹配文本串位置信息

  //printf("e = %s\n", e);
  nr_token = 0;
  while (e[position] != '\0')
  {
   
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo; //存放匹配字符串长度


         Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
             i, rules[i].regex, position, substr_len, substr_len, substr_start);
      

      //  printf("i = %d, rules[i] = %s\n",  i, rules[i].regex);
        nr_token++; //每次匹配成功一个字符就自加1
        // printf("nr_token = %d\n", nr_token);


        position += substr_len;
       // printf("position = %d\n", position);
      //  printf("rules[i].token_type = %d\n", rules[i].token_type);


        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
 
        switch (rules[i].token_type) {
          case  '(':
                    tokens[token_addr].type =  40;
                    strncpy(tokens[token_addr].str, substr_start, substr_len);
                    tokens[token_addr].str[substr_len] = '\0';//为了能在同一个run里执行不同的算数表达式
                    // printf("for left: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                    break;

          case ')': 
                    tokens[token_addr].type =  41;
                    strncpy(tokens[token_addr].str,substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for right: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                    break;

          case '/':  
                    tokens[token_addr].type =  47;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '*':  
                    if(token_addr == 0 || 
                      tokens[token_addr-1].type == '*' || 
                      tokens[token_addr-1].type == '+' ||
                      tokens[token_addr-1].type == '-' ||
                      tokens[token_addr-1].type == '/' ||
                      tokens[token_addr-1].type == TK_EQ ||
                      tokens[token_addr-1].type == TK_UNEQ ||
                      tokens[token_addr-1].type == TK_AND ||
                      ((tokens[token_addr-1].type == TK_NOTYPE) && (tokens[token_addr+1].type = TK_HEX))
                      )
                   {
                    //当字符为*，且满足前面一个字符出现为空格或此时地址为0
                    //再逻辑与上下一个存储类型为16进制数
                    //则判定其存储类型为 指针解引用
                    tokens[token_addr].type =  TK_DEREF;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    break;
                   }
                    else if(tokens[token_addr-1].type == ')' || tokens[token_addr-1].type == TK_num)
                   {
                    //*前面为右括号或整数，判断为
                    tokens[token_addr].type =  42;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;
                   }

          case '+':  
                    tokens[token_addr].type =  43;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '-':  
                   if(tokens[token_addr-1].type == '+' || 
                      tokens[token_addr-1].type == '-' || 
                      tokens[token_addr-1].type == '*' || 
                      tokens[token_addr-1].type == '/' || 
                      tokens[token_addr-1].type == '(' || 
                      token_addr == 0)
                   {
                    //当字符为-，且满足前面一个字符出现为+-*/(其中之一
                    //或者，此时token_addr为0
                    //则判定其存储类型不为减号，而是取负
                    //这里有点bug
                    tokens[token_addr].type =  TK_NEG;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;
                   }
                   else
                   {
                    tokens[token_addr].type =  45;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    tokens[token_addr].str[substr_len] = '\0';
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;
                   }
          
          case TK_num:  
                       if(tokens[token_addr-1].type == TK_DEREF ||
                          tokens[token_addr-1].type == TK_DEREF
                         )
                       {
                        tokens[token_addr].type =  TK_HEX;
                        strncpy(tokens[token_addr].str, substr_start,substr_len); 
                        tokens[token_addr].str[substr_len] = '\0';
                        break;
                       }
                       else
                       {
                        tokens[token_addr].type =  TK_num;
                        strncpy(tokens[token_addr].str, substr_start,substr_len); 
                        tokens[token_addr].str[substr_len] = '\0';
                        break;
                       }
                     
          
          case TK_NOTYPE:
                     token_addr--;//检测到空格时，无需任何操作，回到前一个token_addr，当作什么也没发生
                     break;

          case TK_EQ:
                      tokens[token_addr].type =  TK_EQ;
                      strncpy(tokens[token_addr].str, substr_start,substr_len); 
                      tokens[token_addr].str[substr_len] = '\0';
                   break;
          
          case TK_UNEQ:
                      tokens[token_addr].type =  TK_UNEQ;
                      strncpy(tokens[token_addr].str, substr_start,substr_len); 
                      tokens[token_addr].str[substr_len] = '\0';
                   break;

          case TK_AND:
                      tokens[token_addr].type =  TK_AND;
                      strncpy(tokens[token_addr].str, substr_start,substr_len); 
                      tokens[token_addr].str[substr_len] = '\0';
                   break;

          // case TK_HEX:
          //             if(tokens[token_addr-1].type == TK_DEREF)
          //             {
          //               tokens[token_addr].type =  TK_HEX;
          //               strncpy(tokens[token_addr].str, substr_start,substr_len); 
          //               tokens[token_addr].str[substr_len] = '\0';
          //             }
                      
          //          break;
          
          case TK_REG:

                      tokens[token_addr].type =  TK_REG;
                      strncpy(tokens[token_addr].str, substr_start,substr_len);
                      tokens[token_addr].str[substr_len] = '\0';
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
      token_addr++;
  }

  int c;
  for(c = 0; c < token_addr; c++)
  {
     printf("tokens[%d].type = %d ", c, tokens[c].type);
     printf("tokens[%d].str = %s\n", c,tokens[c].str);
  }

   token_addrs = token_addr-1;
   value = eval(0,token_addrs);

   if( logic == false)
    return false;
  
  // printf("value  = %lu or %#010lx\n", value, value);
   printf("DEX = %lu or HEX = %#010lx\n", value, value);
  token_addr = 0;//把tokens元素地址清0,以便于同一个make run内的下一个算数表达式
  return true;

} 



word_t expr(char *e, bool *success)
 {
  if (!make_token(e)) {
    printf("回到顶层");
    *success = false;
    return 0;
  }

  


  /* TODO: Insert codes to evaluate the expression. */
 // TODO();// 记得取消注释！！
  return 0;
 }

  
//判断表达式的括号是否配对匹配
static int check_parentheses(int p, int q)
{
  int condition_2 = 0;
  int i;
  int cnt_l = 0,cnt_r = 0;//左右括号计数器

  //  printf("进入括号配对函数\n");
  //  printf("传入的p = %d ,传入的q = %d\n", p, q);
  for(i = p; i <= q; i++)
    {
      if((tokens[i].type == '('))
            cnt_l++;
      if((tokens[i].type == ')'))
            cnt_r++;

      // printf("cnt_l = %d, cnt_r = %d\n", cnt_l,cnt_r);
      if(cnt_l < cnt_r)
      {
        // printf("括号存在不配对,程序中止\n");
        condition_2 = 0;
        // Log("condition_2 = %d ,括号不配对\n",condition_2);
        return condition_2;
      }
    }
 
  if(cnt_l == cnt_r)
  {   
    condition_2 = 1;
    // Log("condition_2 = %d ,括号配对\n",condition_2);
    return condition_2;//左括号个数等于右括号个数，匹配
  }

  // printf("condition_2 = %d\n", condition_2);
  return condition_2;

}



//判断表达式是否被一对括号包围着
static bool check_surround(int p, int q)
{
  int a,b;
  int condition_1 = 0;//, condition_2 = 0;
  bool logic1 = true;

  
  a = tokens[p].type;
  b = tokens[q].type;
  //  printf("进入括号包围函数\n");
  //  printf("传入的p = %d ,传入的q = %d\n", p, q);
 
 
  if((a == '(') && (b == ')')) //判断是否被一对匹配的括号包围
    condition_1 = 1;//被括号包围    
  else 
    condition_1 = 0;//没被括号包围

  
  if(condition_1 == 1)
  {
    // printf("condition_1 = %d\n", condition_1);
    // printf("被括号包围，返回true\n");
    logic1 = true;
  }
   if(condition_1 == 0)
  {
    // printf("condition_1 = %d\n", condition_1);
    // printf("未被括号包围，返回false\n");
    logic1 = false;
  }
    

  // Log("logic = %d\n",logic1);
  // printf("logic= %d\n",logic1);
  return logic1;
}
  
 
//寻找算数表达式的主运算符，返回它在tokens表达式中的addr
 static int main_op(int p, int q)
 {
  int i;
  int main_addr = 0;

  int op = -1;
  int right_bracker = 0;
  int priority[] = {
    TK_AND, TK_EQ, TK_UNEQ, '+', '-', '*', '/', TK_NEG,TK_DEREF
  };//符号运算优先级从低到高
 
  printf("进入main_op,p = %d, q = %d\n", p ,q);

  int order = 0;

  while(op == -1)
  {
    for(i = q; i >= p; i--)
    {
      if(tokens[i].type == ')')
        right_bracker++;
      else if(tokens[i].type == '(')
        right_bracker--;

      if(right_bracker != 0)
        continue;

      if(tokens[i].type == priority[order])
      {  
        op = i;
        main_addr = op;
        break;
      }   
    }
  order++;



  }

  if(op == -1)
    assert(0);//未找到主运算符，程序中止
  return main_addr;
}

//eval函数 
static int eval(int start, int end)  //p=开始位置，q=结束位置
 {
  int op;
  int op_type;
  uint64_t val1;
  uint64_t val2;
  int p,q;
  uint64_t result = 0;
  uint64_t value_num;//数字字符转为数值
  
  p = start;
  q = end;
  
  // printf("进入eval,p = %d, q = %d\n", p, q);



  if (p > q)
   {
    //  printf("p = %d, q = %d,p > q,It's a Bad expression\n",p ,q);
     assert(0);
   }  
  // else if((q == p+1) && (tokens[p].type == TK_NEG))
  //  {
  //    //判定为负数的判断方法
  //    printf("2、判断为:It's a negative number\n");
  //    result = -eval(p+1,q);
  //    Log("negative number result= %lu\n", result);
  //    return result;
  //  }
  else if(p == q && tokens[p].type == TK_REG)
   {
    //  printf("2、判断为:REG reading \n");
     const char *s;
     _Bool * success = NULL;
     s = tokens[p].str + 1;
    //  printf("s = %s\n", s);
     word_t value = isa_reg_str2val(s, success);
     printf("valu = %#010lx\n", value);
    //  printf("value = %lu\n", value);
     return result = value;

   }
  else if(p == q && tokens[p].type == TK_HEX)
   {
      // printf("2、判断为:It's a HEX number\n");
      // word_t DEREF_addr;
      word_t HEX_num;
      sscanf(tokens[q].str, "%lx",&HEX_num);//匹配无符号十六进制数，前缀为0x或0x被丢弃
      // result = vaddr_read(DEREF_addr,4);
      result = HEX_num;
      return result;

   }
  else if (p == q)
   {
      printf("2、判断为:It's a number\n");
      value_num = atoi(tokens[p].str); 
      result = value_num;
      printf("value_num = %lu\n" , value_num);
      return result;
   }

  else if((check_surround(p, q) == true) && (check_parentheses(p,q) == 0))//被包围但不匹配
  {
    printf("错误的表达式\n");
    warn_wrong(false);
   // assert(0);
  }

  else if ((check_surround(p, q) == true) && (check_parentheses(p,q) == 1))//被包围且匹配
  {
    
    if((check_parentheses(p+1,q-1) == 1) && (check_surround(p+1,q-1) == false))
    {
      // printf("去掉外面一层括号后，不再被括号包围且内部括号配对：\n");
      result = eval(p + 1, q - 1);
      // printf("result = %lu\n", result);
      return result;
    }
    else if((check_parentheses(p+1,q-1) == 0) && (check_surround(p+1,q-1) == false))
    {
      // printf("去掉外面一层括号后，不再被括号包围,但内部括号不配对：\n");
      //  printf("此时先找主运算符");
       op = main_op(p,q);
       op_type = tokens[op].type;
       Log("找主运算符,the position of 主运算符op = %s in the token expression: %d\n", tokens[op].str, op);
       if(tokens[op].type == TK_DEREF || tokens[op].type == TK_NEG)
      {
                           
        // val2 = eval(op+1,q);
        // val1 = 0;
        
        switch (op_type)
        {
          case TK_DEREF:       //指针解引用
                        val2 = eval(op+1,q);
                        val1 = 0;
                        word_t DEREF_addr = val2;
                        // sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
                        result = vaddr_read(DEREF_addr,4);
                        return result;
          case TK_NEG:
                        printf("判断为:It's a negative number\n");
                        result = -eval(p+1,q);
                        Log("negative number result= %lu\n", result);
                        return result;

          default: assert(0);
       
        }
      }
      else 
      {
        val1 = eval(p, op - 1);
        val2 = eval(op + 1, q);
        // printf("val1 = %lu\n", val1);
        // printf("val2 = %lu\n", val2);
        switch (op_type)
        {
          case '+': return result = val1 + val2;
          case '-': return result = val1 - val2;
          case '*': return result = val1 * val2;
          case '/': return result = val1 / val2;
          case TK_EQ : return result = (val1 == val2);
          case TK_UNEQ : return result = (val1 != val2);
          case TK_AND : return result = (val1 && val2);

          // case TK_DEREF ://指针解引用
          //            word_t DEREF_addr;
          //            sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
          //            result = vaddr_read(DEREF_addr,4);
          //            return result;

          default: assert(0);
        }
      }
    }
    else if((check_parentheses(p+1,q-1) == 1) && (check_surround(p+1,q-1) == true))
    {
      // printf("去掉外面一层括号后，仍被括号包围且内部括号配对：\n");
      result = eval(p + 1, q - 1);
      // printf("result = %lu\n", result);
      return result;
    }
    else if((check_parentheses(p+1,q-1) == 0) && (check_surround(p+1,q-1) == true))
    {
      // printf("去掉外面一层括号后，仍被括号包围,但内部括号不配对：\n");
      op = main_op(p,q);
      op_type = tokens[op].type;
      Log("找主运算符,the position of 主运算符op = %s in the token expression: %d\n", tokens[op].str, op);

      if(tokens[op].type == TK_DEREF || tokens[op].type == TK_NEG)
      {
                           
        // val2 = eval(op+1,q);
        // val1 = 0;
        
        switch (op_type)
        {
          case TK_DEREF:       //指针解引用
                        val2 = eval(op+1,q);
                        val1 = 0;
                        word_t DEREF_addr = val2;
                        // sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
                        result = vaddr_read(DEREF_addr,4);
                        return result;
          case TK_NEG:
                        printf("判断为:It's a negative number\n");
                        result = -eval(p+1,q);
                        Log("negative number result= %lu\n", result);
                        return result;

          default: assert(0);
       
        }
      }
      else 
      {
        val1 = eval(p, op - 1);
        val2 = eval(op + 1, q);
        // printf("val1 = %lu\n", val1);
        // printf("val2 = %lu\n", val2);
        switch (op_type)
        {
          case '+': return result = val1 + val2;
          case '-': return result = val1 - val2;
          case '*': return result = val1 * val2;
          case '/': return result = val1 / val2;
          case TK_EQ : return result = (val1 == val2);
          case TK_UNEQ : return result = (val1 != val2);
          case TK_AND : return result = (val1 && val2);

          // case TK_DEREF ://指针解引用
          //            word_t DEREF_addr;
          //            sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
          //            result = vaddr_read(DEREF_addr,4);
          //            return result;

          default: assert(0);
        }
      }
    }
  }
  else 
  {
    //  printf("针对去掉括号没有问题的时候：\n");
    op = main_op(p,q);
    op_type = tokens[op].type;
    Log("找主运算符,the position of 主运算符op = %s in the token expression: %d\n", tokens[op].str, op);
    if(tokens[op].type == TK_DEREF || tokens[op].type == TK_NEG)
    {
                           
        // val2 = eval(op+1,q);
        // val1 = 0;
        
        switch (op_type)
        {
          case TK_DEREF:       //指针解引用
                        val2 = eval(op+1,q);
                        val1 = 0;
                        word_t DEREF_addr = val2;
                        // sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
                        result = vaddr_read(DEREF_addr,4);
                        return result;
          case TK_NEG:
                        printf("判断为:It's a negative number\n");
                        result = -eval(p+1,q);
                        Log("negative number result= %lu\n", result);
                        return result;

          default: assert(0);
       
        }
    }
    else 
    {
      val1 = eval(p, op - 1);
      val2 = eval(op + 1, q);
      // printf("val1 = %lu\n", val1);
      // printf("val2 = %lu\n", val2);
      switch (op_type)
       {
        case '+': return result = val1 + val2;
        case '-': return result = val1 - val2;
        case '*': return result = val1 * val2;
        case '/': return result = val1 / val2;
        case TK_EQ : return result = (val1 == val2);
        case TK_UNEQ : return result = (val1 != val2);
        case TK_AND : return result = (val1 && val2);

        // case TK_DEREF ://指针解引用
        //              word_t DEREF_addr;
        //              sscanf(tokens[q].str, "%lx",&DEREF_addr);//匹配无符号十六进制数，前缀为0x或0x被丢弃
        //              result = vaddr_read(DEREF_addr,4);
        //              return result;

        default: assert(0);
       }
    }
  }
  return result;
 } 



static bool warn_wrong(bool a)
{
  if(a == false)
    logic =  false;
  else 
    logic = true;

  return logic;
}

