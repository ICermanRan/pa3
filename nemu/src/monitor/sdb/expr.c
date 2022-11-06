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
    {"[1-9][0-9]*", TK_num}, // number
   // {"[0-9]", TK_num}, // number
    {"\\-", '-'},         // reduce,          token_type == 45
    {"\\+", '+'},         // plus,            token_type == 43
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

//int num_substr_len = 0;//存放数字字符长度，用于非数字字符存放在tokens数组

 int token_addr = 0;//全局变量，记录tokens数组元素用了多少个
 int token_addrs;
 bool logic2 = true;//全局变量，用于判断输入的表达式括号是否匹配，不匹配则false给expr函数

 static int eval(int p, int q); //函数声明
static int main_op(int p, int q);//独属形参tokens_addr
 static bool check_parentheses(int p, int q);//括号配对及正确性函数声明
 //char push(char bracket);//压栈操作函数
 //void pop();		//出栈操作函数


static bool make_token(char *e) {
  int position = 0;
  int i;
  u_int32_t value;
 
  regmatch_t pmatch;//存放匹配文本串位置信息

  //printf("e = %s\n", e);
  nr_token = 0;
  while (e[position] != '\0') {
   
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo; //存放匹配字符串长度


        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
        
        // printf("match char = %.*s\n", substr_len,substr_start);

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
                    // printf("for left: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                    break;

          case ')': 
                    tokens[token_addr].type =  41;
                    strncpy(tokens[token_addr].str,substr_start,substr_len);
                    // printf("for right: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position);
                    break;

          case '/':  
                    tokens[token_addr].type =  47;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '*':  
                    tokens[token_addr].type =  42;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '+':  
                    tokens[token_addr].type =  43;
                    strncpy(tokens[token_addr].str, substr_start,substr_len);
                    // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                    break;

          case '-':  
                   tokens[token_addr].type =  45;
                   strncpy(tokens[token_addr].str, substr_start,substr_len);
                   // printf("for minus: tokens[position].type = %d ,position = %d\n",  tokens[position].type, position); 
                   break;

          case TK_num:  
                    if(substr_len > 33)
                     {
                      tokens[token_addr].type =  TK_num;
                      strncpy(tokens[token_addr].str, substr_start,32); //避免输入过长，导致缓冲区溢出
                     }
                    else
                     {
                      tokens[token_addr].type =  TK_num;
                      strncpy(tokens[token_addr].str, substr_start,substr_len); 
                     }
                   break;
          
          case TK_NOTYPE:
                   // position += substr_len;
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
     printf("outloop： tokens[%d].type = %d ", c, tokens[c].type);
     printf("tokens[%d].str = %s\n", c,tokens[c].str);
  }

   token_addrs = token_addr-1;
   value = eval(0,token_addrs);
   printf("value = %d\n", value);
  return true;
} 



word_t expr(char *e, bool *success,int p, int q) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  if (logic2 == false)
  {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
 // TODO();// 记得取消注释！！
  return 0;
}

  


 
// char *top = NULL; //指针，指向栈顶的

// char push(char bracket)		//压栈操作函数
// {
// 	top = top+1;
// 	return *(top) = bracket;
// }

// void pop()			//出栈操作函数，待会匹配的时候，调用这个函数把匹配的两个括号弹出 
// {
// 	top = top-2;
// }


//判断表达式是否被一对匹配的括号包围着, 同时检查表达式的左右括号是否匹配

static bool check_parentheses(int p, int q)
{
  int a,b;
  int condition_1 = 0, condition_2 = 0;
  int i;
  int cnt_l = 0,cnt_r = 0;//左右括号计数器
//  int j=0;
// char array[32];//数组，将tokens数组中的括号按顺序存放入其中
//  char stack[32];//数组，用来做栈的空间 
//  int stack_length;
  bool logic1 = true;

  
  a = tokens[p].type;
  b = tokens[q].type;
  printf("进入括号配对函数\n");
 // printf("%s = %d, %s = %d\n", tokens[p].str, a, tokens[q].str,b);
 
  if((a == '(') && (b == ')')) //判断是否被一对匹配的括号包围
    condition_1 = 1;//被括号包围    
  else 
    condition_1 = 0;//没被括号包围

  
  for(i = p; i <= q; i++)
    {
      if((tokens[i].type == '('))
            cnt_l++;
      if((tokens[i].type == ')'))
            cnt_r++;

      printf("cnt_l = %d, cnt_r = %d\n", cnt_l,cnt_r);
      if(cnt_l < cnt_r)
            condition_2 = 0;//在任意位置，左括号个数比右括号小，必定不匹配
    }

    if(cnt_l == cnt_r)
        condition_2 = 1;//左括号个数等于右括号个数，匹配
    else
        condition_2 = 0;//否则，不匹配

  
  // for(i = p; i <= q; i++)
  // {
  //   if((tokens[i].type == '(') )
  //     {
  //       array[j] = '(';//将tokens数组中的括号按顺序存放入其中
  //       j++;
  //     }
  //   else if((tokens[i].type == ')'))
  //     {
  //       array[j] = ')';//将tokens数组中的括号按顺序存放入其中
  //       j++;
  //     }
  // }
  
  // stack_length = strlen(array);//计算数组里的括号个数，待会控制for轮次的时候用

  // for(k = 0; k < stack_length; k++)
  // {
  //   push(array[k]);//先把数组里的括号压入栈里

  //   if(array[k] == ']')//如果压入的是']'号
  //   {
  //     if(*(top-1) == '[')//就在当前位置往下一个单位判断有没有'['号，如果有，就弹出栈 
  //     {
  //       pop();
  //     }
  //   }

  //   if(array[k] == ')')//如果压入的是')'号
  //   {
  //     if(*(top-1) == '(')//就在当前位置往下一个单位判断有没有'('号，如果有，就弹出栈 
  //     {
  //       pop();//必须先入栈的是左括号，后入栈的是右括号才能配对
  //     }
  //   }

  //   if(array[k] == '}')//如果压入的是')'号
  //   {
  //     if(*(top-1) == '{')//就在当前位置往下一个单位判断有没有'('号，如果有，就弹出栈 
  //     {
  //       pop();//必须先入栈的是左括号，后入栈的是右括号才能配对
  //     }
  //   }
  // }
  
  // if(top == stack-1)
  // {
  //   printf("括号匹配");
  //   condition_2 = 1;
  // }
  // else
  // {
  //   printf("括号不匹配");
  //   condition_2 = 0;
  // }
  
  
  if((condition_1 == 1) && (condition_2 == 1))
  {
    printf("condition_1 = %d,condition_2 = %d\n", condition_1,condition_2);
    printf("被括号包围且左右匹配，返回true\n");
    return logic1 = true;  //被括号包围且左右匹配，返回true
  } 
  if((condition_1 == 0) && (condition_2 == 1))
  {
    printf("condition_1 = %d,condition_2 = %d\n", condition_1,condition_2);
    printf("未被括号包围但左右匹配，返回false\n");
    return logic1 = false;  //未被括号包围但左右匹配，返回false
  }
    
  if(condition_2 == 0)
    logic2 = false;

  
  return logic1;
}
  
 
//寻找算数表达式的主运算符，返回它在tokens表达式中的addr
 static int main_op(int p, int q)
 {
  int j;
  int i;
  int cnt1,cnt2;
  int stop_1 = 0,stop_2 = 0;
  int main_addr = 0;
 
  printf("进入main_op，p = %d, q = %d\n", p ,q);

  for(j = q; j >= p; j--)
  {
    //printf("j = %d\n", j);
    cnt1 = 0;
    for(i = j; i >= p; i--)
    {
      //printf("tokens[i].type = %d\n", tokens[i].type);
      if(tokens[i].type == '(')
        cnt1 = cnt1 + 1;
      else if(tokens[i].type == ')')
        cnt1 = cnt1 - 1;
      else 
        cnt1 = cnt1;

      //printf("cnt1 = %d\n", cnt1);
    } //确认当前位置向左遍历，括号是否配对

    if(cnt1 == 0) //不被括号包围，开始找符号
    {
        switch (tokens[j].type) //算符匹配+-
        {  
          case '+':
          case '-':
                  main_addr = j;
                  stop_1 = 1;//表示已找到主运算符+-，无需再遍历
                  break;
          default :
                  break;
        } 
    }
  }

  //printf("stop_1 = %d\n", stop_1);

  if(stop_1 == 0)//未找到+-，重新开始遍历
  { 
    for(j = q; j >= p; j--)
    {
      cnt2 = 0;
      for(i = j; i >= p; i--)
     {
        if(tokens[i].type == '(')
          cnt2 = cnt2 + 1;
        else if(tokens[i].type == ')')
          cnt2 = cnt2 - 1;
        else
          cnt2 = cnt2;
     } //确认当前位置向左遍历，括号是否配对

    if(cnt2 == 0) //不被括号包围，开始找符号
    {
        switch (tokens[j].type) //算符匹配*/
        {  
          case '*':
          case '/':
                  main_addr = j;
                  stop_2 = 1;//表示已找到主运算符*/，无需再遍历
                  break;
          default :
                  break;
        } 
    }
    }
  }

  //printf("stop_2 = %d\n", stop_2);
  if((stop_2 == 0) && (stop_1 == 0))
    assert(0);//未找到主运算符，程序中止


  return main_addr;
 }

//eval函数 
static int eval(int start, int end)  //p=开始位置，q=结束位置
 {
  int op;
  int op_type;
  int val1,val2;
  int p,q;
  u_int32_t result = 0;
  u_int32_t value_num;//数字字符转为数值
  
  p = start;
  q = end;
  //printf("token_addrs = %d, q = %d\n", token_addrs, q);
  //op = main_op(token_addrs);//返回的是op在tokens数组中的位置
  // op = main_op(q);
  // op_type = tokens[op].type;
 // printf("1、刚进入eval,the position of 主运算符op = %s in the token expression: %d\n", tokens[op].str, op);
  printf("进入eval,p = %d, q = %d\n", p, q);

  if (p > q)
   {
     printf("p = %d, q = %d,p > q,It's a Bad expression\n",p ,q);
     assert(0);
   }  
  else if (p == q)
   {
    /* Single token.  BNF:<expr> ::= <number>    # 一个数是表达式
     * For now this token should be a number.
     * Return the value of the number.
     */
   // Log("enter the It's a number\n");
    printf("2、判断为:It's a number\n"); 
    value_num = atoi(tokens[p].str); 
    printf("value_num = %d\n" , value_num);
    //return result = value_num;   
     result = value_num;
     return result;
   }
  else if (check_parentheses(p, q) == true) 
  {
    /* 
      BNF:| "(" <expr> ")"     # 在表达式两边加个括号也是表达式
     *The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    printf("3、begin to solve 括号\n");
    //if((tokens[p].type == '(') && (tokens[q].type == '('))
    //  return result = eval(p + 1, q - 1);
    result = eval(p + 1, q - 1);
    return result;
  }
  else {
  // op = the position of 主运算符 in the token expression;
  // printf("the position of 主运算符%s in the token expression: %d\n", tokens[op].str, op);
    op = main_op(p,q);
    op_type = tokens[op].type;
    printf("找主运算符,the position of 主运算符op = %s in the token expression: %d\n", tokens[op].str, op);
    
    printf("开始求值\n");
    val1 = eval(p, op - 1);
    val2 = eval(op + 1, q);
      switch (op_type) {
      case '+': return result = val1 + val2;
      case '-': return result = val1 - val2;
      case '*': return result = val1 * val2;
      case '/': return result = val1 / val2;
      default: assert(0);
    }
  }
  return result;
 } 




