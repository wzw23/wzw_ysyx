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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static int len=0;
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  long unsigned result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";
uint64_t choose(uint64_t n){
    return random()%n;
}
char* itoa(int, char* , int);
static void gen_num(){
    char *bufanother=&buf[len];
   // itoa(choose(100),bufanother,10);
    sprintf(bufanother,"%ld",choose(100));
    len=len+strlen(bufanother); 
}
static void gen(char kh){
    buf[len]=kh;
    len++;
}

static void gen_rand_op(){
    switch(choose(4)){
        case 0:buf[len]='+';len++;break;
        case 1:buf[len]='-';len++;break;
        case 2:buf[len]='*';len++;break;
        case 3:buf[len]='/';len++;break;
        default:assert(0);break;
    }
}
static void gen_rand_expr() {
//增添pa1中的框架代码
   if(len>=65535)
      return; 
   switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  } 
 // buf[0] = '\0';
}
//wzw add
static void qinghuan(){
    memset(buf,'\0',len);
    len=0;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();
    if(len>=65535){
        qinghuan();
        i--;
        continue;
    }

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) {
        i--;
        qinghuan();//wzw add
        continue;
    };

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint64_t result;
   // int add=
    fscanf(fp, "%lu", &result);
    //printf("wzw add=%d",add);
    pclose(fp);
    //printf("%ld %s\n", result, buf);
    printf("%lu %s\n", result, buf);
    //buf[0]='\0';
    //又是清除buf缓存的问题 卡了一下午
    qinghuan();
    //memset(buf,'\0',len);
    //len=0;
  }
  return 0;
}
