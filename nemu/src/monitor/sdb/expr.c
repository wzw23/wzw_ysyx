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
#define RESULTSIZE 1000
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
  add,
  TK_NEQ,
  TK_AND,
  TK_XNUM,
  TK_REG,
  DEREF,
  NEG 
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
  {"0X[0-9a-f]+",TK_XNUM},
  {"[0-9]+",TK_NUM},
  {"&&",TK_AND},
  {"!=",TK_NEQ},
  {"\\$[a-z0-9$]+",TK_REG}
  //{"0X[0-9]+",TK_XNUM}
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

//word_t isa_reg_str2val(const char *s, bool *success);
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
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

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
          case TK_NEQ:
          case TK_AND:
          case TK_EQ:
          tokens[j++].type=rules[i].token_type;
         // printf("tokens j=%d",j-1);
         // printf("type=%d\n",tokens[j-1].type);
          break;
          case TK_NOTYPE:
            assert(1);
            break;
         //case ( ) int
          case TK_BK:  
          //tokens[j].type=rules[i].token_type;
            //printf("tokens j=%d",j);
            //printf("str=%d\n",tokens[j].type);
          //strncpy(tokens[j++].str,substr_start,substr_len);  break;
          case TK_NUM: 
          
          tokens[j].type=rules[i].token_type;
          //printf("tokens j=%d",j);
          //printf("str=%d\n",tokens[j].type);
          strncpy(tokens[j++].str,substr_start,substr_len);
          //printf("str=%s\n",tokens[j-1].str);
          break;

          case TK_XNUM: 
          tokens[j].type=TK_NUM;
          //char *stop;
          uint64_t expr;
          sscanf(substr_start,"%lx",&expr); 
          printf("firsttest=%lx\n",expr);
          //uint64_t expr=(uint64_t)strtol(substr_start,&stop,16); 
          char exprstr[RESULTSIZE]={'\0'};
          sprintf(exprstr,"%lu",expr);
          printf("secondtest=%s\n",exprstr);
          strncpy(tokens[j++].str,exprstr,substr_len+1);
          printf("thirdtest=%s\n",tokens[j-1].str);
          //free(exprstr);
          break;

          
          case TK_REG: 
          //isa_reg_str2val();
          tokens[j].type=TK_NUM;
          char regstr[RESULTSIZE]={'\0'};
          //char *regstr=(char *)malloc(2*sizeof(char));
          printf("cpu.pc=0X%lx\n",cpu.pc);

          strncpy(regstr,substr_start+1,substr_len-1);
          //strncpy(regstr,substr_start+1,substr_len-1);

          //bool *success=(bool *)malloc(10*sizeof(bool));
          bool success[1]={0};
          //*success=0;
          //isa_reg_str2val(regstr,success);
          uint64_t reg;
          if(!strcmp(regstr,"pc"))
          {
              reg=(uint64_t)cpu.pc;
              //printf("cpu.pc=%lu\n",reg);
              *success=1;
          }
          else {reg=isa_reg_str2val(regstr,success);}

          printf("first=%lu\n",reg);
          printf("success=%d",*success);
          if(*success==0)
              printf("输入寄存器地址错误");
          //printf("lu",result);
         // sprintf(exprstr,"%lu",expr);
          sprintf(regstr,"%lu",reg);
          printf("regstr=%s",regstr);
          int lenreg=1;
          while((reg/10)!=0){
                reg=reg/10;
                lenreg++;
          }
          strncpy(tokens[j++].str,regstr,lenreg);
          //printf("tokens[0]=%s",tokens[0].str);
          //printf("%s",tokens[j-1].str);
         // free(regstr);

          //strncpy(tokens[j++].str,substr_start,substr_len);
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
    int Po_Yx=0;//主运算符优先级，0最大
    int Yx=0;
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
        //判断优先级 数值越大优先级越低 越可能是主运算符
        if((pa->type=='+')||(pa->type=='-')||(pa->type=='*')||(pa->type=='/')||(pa->type==TK_NEQ)||(pa->type==TK_EQ)||(pa->type==TK_AND)||(pa->type==DEREF)||(pa->type==NEG)){//+ - * /
            if(pa->type=='+'||pa->type=='-')
                Yx=4;
            else if(pa->type=='*'||pa->type=='/')
                Yx=3; 
            else if(pa->type==TK_EQ||pa->type==TK_NEQ)
                Yx=7;
            else if(pa->type==TK_AND)
                Yx=11;
            else if(pa->type==DEREF||pa->type==NEG)
                Yx=2;
        //确定主运算符
          if(kuohao==0){
              if(Yx>=Po_Yx){
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
//
word_t paddr_read(paddr_t addr, int len);

static uint64_t eval(Token *p, Token *q) {
  if (p > q) {
      return -1;
      }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
      //printf("before atoi p->str=%s\n",p->str);
     if(p->type==TK_NUM){
       uint64_t fh=(uint64_t)strtol(p->str,NULL,10);

       //uint64_t fh=atoi(p->str); 
       //printf("after atoi p->str=%lu\n",fh);
       return fh; 
     }


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
      case TK_EQ: return val1==val2;
      case TK_NEQ: return val1!=val2;
      case TK_AND: return val1&&val2;
      case DEREF:  {
                   return paddr_read(val2,4);
                   //char *val2str=strdup("");  
                   //sprintf(val2str,"%lu",val2);
                   //return *val2str; 
                   //free(val2str);
                   }
      case NEG:  return -val2;
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
  for (int i = 0; i < j; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type =='+' || tokens[i - 1].type =='-'|| tokens[i - 1].type =='*'|| tokens[i - 1].type =='/') ) {
    tokens[i].type = DEREF;
  }
}
  for (int i = 0; i < j; i ++) {
    if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type =='+'||tokens[i - 1].type =='-' || tokens[i - 1].type =='*'|| tokens[i - 1].type =='/' )) {
        tokens[i].type = NEG;
    }
}

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

