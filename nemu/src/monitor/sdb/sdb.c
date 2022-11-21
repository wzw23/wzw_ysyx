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
//wzw insert
static int cmd_si(char *args) {
  char *arg2 = strtok(NULL, " ");
  cpu_exec(atoi(arg2));
  return 0;
}
//wzw add
word_t paddr_read(paddr_t addr, int len);
static int cmd_x(char *args){
  char *N = strtok(NULL, " ");  
  int n=atoi(N);
 // printf("%d\n",n);
  char *EXPR=strtok(NULL," ");
 // printf("%s",EXPR);
  uint64_t expr=(uint64_t)strtol(EXPR,NULL,16);
  //printf("%ld",expr);
  for(int i=0;i<n;i++){
      uint64_t result=paddr_read(expr+i*4,4);
      printf("addr=0x%lx\n",expr+i*4);
      printf("value=%lx\n",result);
  }
  return 0;
  
}
//wzw add
word_t expr(char *e, bool *success);
static int cmd_p(char *args) {
  bool success;
  char *arg = strtok(NULL,"\0");
  //printf("%s\n",arg);
  uint64_t result=expr(arg,&success);
        char *resultstr=strdup("");
        sprintf(resultstr,"%lu",result);
        printf("the result is %s\n",resultstr); 
        free(resultstr);

  //printf("success is %i",success);
  return 0;
}
#define BUFFER_SIZE 65536
static int cmd_ptest(){
    int flag=1;
    bool success;
    char buffer[BUFFER_SIZE];
    int totalRead=0;
    FILE *fp=fopen("/home/wzw/ysyx-workbench/nemu/tools/gen-expr/log","r");
    if(fp==NULL)
    {
        printf("unable to open file\n");
        exit(-1);
    }
    while(fgets(buffer,BUFFER_SIZE,fp)!=NULL){
        totalRead= strlen(buffer);
        // printf("totalRead=%d\n",totalRead);
        buffer[totalRead-1]=buffer[totalRead-1]=='\n'
            ?'\0'
            :buffer[totalRead-1];
        //printf("%s\n",buffer);
        char * ret=strtok(buffer," ");
        char *test_result=ret;
        //printf("%s\n",ret);
        ret=strtok(NULL,"\0");
        char *test_exp=ret;
        
        uint64_t result=expr(test_exp,&success);
        char *resultstr=strdup("");
        sprintf(resultstr,"%lu",result);
        //printf("result=%lu\n",result);
       // printf("resultstr=%s",resultstr);
        //printf("test_result=%s",test_result);
        if(strcmp(resultstr,test_result)){
            printf("%s  test is wrong\n the result is %s,and the real result is %s\n",test_exp,resultstr,test_result); 
            flag=0;
        }
        //if(flag)
         //   printf("test success");
        free(resultstr);
        //printf("%s\n%s\n",test_result,test_exp);
        //printf("%s\n",ret);
        //printf("%s\n",buffer);
}
if(flag)
    printf("test success\n");

fclose(fp);
return 0;

    
}
static int cmd_infor(char *args) {
   isa_reg_display();
   return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */

  { "si", "execute n step", cmd_si},
  {"info","show register",cmd_infor},
  {"x","printf pmum",cmd_x},
  {"p","expression evaluation",cmd_p},
  {"ptest","test expression evaluation",cmd_ptest}

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
