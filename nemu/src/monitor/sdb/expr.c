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
//wzw add
static int j=0;
enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
  //wzw add
  TK_NUM,
  TK_BK,
  add
  //sub,
  //mup,
  //dvi
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"-", '-'},            //wzw add - * /
  {"\\*",'*'},            
  {"/",'/'},
  {"\\(",TK_BK},        //wzw add () num
  {"\\)",TK_BK},
  {"[0-9]+",TK_NUM}

  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
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

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  //wzw add
//  int j=0;//length of token
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
        //wzw add test
      //  printf("i=%d\n",i);
       // printf("regex=%d\n",NR_REGEX);
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        //wzw add the next line text
        //printf("substr_start=%d\n",*substr_start);

        int substr_len = pmatch.rm_eo;
        //wzw add the next two line text
        //printf("substr_start=%.*s\n",substr_len,substr_start);
        //printf("substr_start2=%s\n",substr_start);

        //wzw zhushi
        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
         //   i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        //wzw add
       // tokens[j].type=rules[i].token_type;
       // printf("tokens j=%d",j);
       // printf("str=%d\n",tokens[j].type);
        switch (rules[i].token_type) {
         //case + - * / 
          case '-':
          case '+':
          case '*':
          case '/':
          tokens[j++].type=rules[i].token_type;
         // printf("tokens j=%d",j-1);
         // printf("type=%d\n",tokens[j-1].type);
          break;
          case TK_NOTYPE:
            assert(1);
            break;
         //case ( ) int
          case TK_BK:  
          tokens[j].type=rules[i].token_type;
          //printf("tokens j=%d",j);
          //printf("str=%d\n",tokens[j].type);
          strncpy(tokens[j++].str,substr_start,substr_len);  break;
          case TK_NUM: 
          tokens[j].type=rules[i].token_type;
          //printf("tokens j=%d",j);
          //printf("str=%d\n",tokens[j].type);
          strncpy(tokens[j++].str,substr_start,substr_len);
          //printf("str=%s\n",tokens[j-1].str);
          break;
          //printf("str=%d\n",tokens[i].type);
         // printf("str=%s\n",tokens[i].str);
          default: TODO();break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
static Token * P_operator(Token *p,Token *q){
    int kuohao=0;
    Token *pa=p;
    Token *qa=q;
    Token *Po=pa;
    //int Po=0;
    int Po_Yx=1;//主运算符优先级，0最大
    int Yx=1;
    //因为continue没加卡了半天
    while(pa<=qa){
        if(!strcmp(pa->str,"(")){
            kuohao++;
            pa++;
            continue;
        }
        else if(!strcmp(pa->str,")")) {
            kuohao--;
            pa++;
            continue;
        }
        //判断优先级
        if((pa->type=='+')||(pa->type=='-')||(pa->type=='*')||(pa->type=='/')){//+ - * /
            if(pa->type=='+'||pa->type=='-')
                Yx=0;
            else Yx=1;
        //确定主运算符
          if(kuohao==0){
              if(Yx<=Po_Yx){
                 Po_Yx=Yx; 
                 Po=pa; 
                 //pa++; 
              }
              //else
               //  pa++;
             pa++;
             continue;
          }
        else{ 
            pa++;
            continue;
        }
        }
        else{ 
            pa++;
            continue;
            }

}

        return Po;
     
}
static bool check_parentheses(Token *p,Token *q);
//wzw add eval
static uint64_t eval(Token *p, Token *q) {
  if (p > q) {
      return -1;
      }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
     if(p->type==TK_NUM)
       return atoi(p->str); 
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    //printf("p->str=%s\n",p->str);
    //printf("q->str=%s\n",q->str);
    Token *op =P_operator(p,q); 
    //printf("op->type=%d\n",op->type);
    uint64_t val1 = eval(p, op - 1);
    uint64_t val2 = eval(op + 1, q);

    switch (op->type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/':{
                int64_t val2fu=(int64_t)val2;
                int64_t val1fu=(int64_t)val1;
                uint64_t chu=(uint64_t)(val1fu/val2fu);
                return chu;
                //return val1 / val2;
               } 
      default: assert(0);
    }
  }
  return 0;
}


static bool check_parentheses(Token *p,Token *q){
  //printf("p->str=%s\n",p->str);
  //printf("q->str=%s\n",q->str);
  //printf("q-1->str=%s\n",(q-1)->str);
  //printf("q-2->str=%s\n",(q-2)->str);


  if(strcmp((p)->str,"(")||strcmp((q)->str,")")){
        return false;
  }
  Token *pa=p+1;
  Token *qa=q-1;
  char stack[65536][32];
  int k=0;
  while(pa<=qa){
    if(strcmp(pa->str,"(")==0){
        strcpy(stack[k++],pa->str);
        pa++;
    }
    else if(strcmp(pa->str,")")==0){
        k--; 
        if(k<0)
            return false;
        pa++;
    }
    else 
        pa++;
  }
  if(k==0)
      return true;
  else{
      k=0;
      return false;
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return -1;
  }
  else{
  Token *q=&tokens[j-1];
  Token *p=&tokens[0];   
  uint64_t result=eval(p,q);
//  printf("result=%lu ",result); 
//  eval(p,q);
//  while(p<=q){
//  printf("p->type=%d\n p->str=%s\n",p->type,p->str);
//  p++;
//  清除缓存 在这卡了2小时bug
  while(p<=q){
    //p->type=NULL;
    memset(p->str,'\0',sizeof(p->str));
    p++;
  } 
  j=0;
  return result;
  } 

  /* TODO: Insert codes to evaluate the expression. */
  //wzw zhushi next line
 // TODO();
  
  j=0;
  return 0;
}

