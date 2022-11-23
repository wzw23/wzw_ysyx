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

#include "sdb.h"
#include <string.h>
#define NR_WP 32
#define RESULTMAXSIZE 1000

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  //char *expr;
  uint64_t p_data;
  uint64_t n_data;
  char *arg;

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].p_data=0;
    wp_pool[i].n_data=0;
    wp_pool[i].arg=(char *)malloc(1000*sizeof(char));
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(uint64_t data,char *arg){
    printf("new_wp bigin");
    if(free_==NULL)
        assert(0);
    else{
        WP *jd=free_;
        jd->p_data=data;
        jd->n_data=data;
        strcpy(jd->arg,arg);
        //*wp_pool=*wp_pool->next; 
        free_=free_+1;
        if(head==NULL){
            jd->next=NULL;
            head=jd;
        }
        else{
            jd->next=head->next;
            head->next=jd;
        } 
    }
    return head;
}
WP *free_wp(WP *wp){
    WP *jd2=head;
    if(jd2==wp){
        head=head->next;
        jd2->next=free_; 
        free_=jd2;
    }
    else{
        while(jd2->next!=NULL){
            if(jd2->next==wp){
                WP *jd_next=jd2->next;
                jd2->next=jd_next->next;
                jd_next->next=free_;
                free_=jd_next;
                break;
            }
            jd2=jd2->next;
        }

    }
    //jd2=free_;
    //while(jd2!=NULL){
    //    printf("free_no=%d\n",jd2->NO);
    //    jd2=jd2->next;
    //}
    //jd2=head;
    //while(jd2!=NULL){
    //    printf("head=%d\n",head->NO);
    //    jd2=jd2->next;
    //}
    return head;

    }
void watchpoint_exam(){
   //printf("head->NO=%d",head->NO);
   //printf("head->arg=%s",head->arg);
   WP *test=head;
   while(test!=NULL){
        bool success;
        test->n_data=expr(test->arg,&success);
        if(test->n_data!=test->p_data)
        {   
            printf("old_value=%lu\n",test->p_data);
            printf("new_vlaue=%lu\n",test->n_data);
            test->p_data=test->n_data;
            nemu_state.state=NEMU_STOP;
        }
        test=test->next;
   }
   return;
}
