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

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  word_t exp_ans;
  char exp[100];
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
void new_wp(char * exp){
  bool *success = false;
  WP* next_wp;
  //printf("new wp \n");
  if(head==NULL){
    //printf("head == NULL \n");
    head = free_;
    next_wp = head;
  }
  else {
    next_wp = head;
    while(next_wp->next!=NULL){
      next_wp = next_wp->next;
    }

    next_wp->next = free_;
    next_wp = free_;
    //printf("next_wp = free_\n");
  }
  free_ = free_->next;
  next_wp -> next = NULL;
  strcpy(next_wp->exp,exp);
  next_wp->exp_ans = expr(exp,success);   
  //return next_wp;
}


void free_wp(WP* wp){
  WP* pointer = head;
  while(pointer->next!= wp){
    pointer = pointer->next;
  }
  pointer->next = pointer->next->next;
  wp->next = free_;
  free_ = wp;
}

void print_wp(){
  WP* pointer = head;
  //printf("print wp \n");
  //printf("NO.%d\t%s\t%ld\n",pointer->NO,pointer->exp,pointer->exp_ans);
  while(pointer != NULL){
    
    //printf("NO.%d\t%s\t%ld\n",pointer->NO,pointer->exp,pointer->exp_ans);
    pointer = pointer->next;
  }
}

int check_wp(){
  WP* pointer = head;
 
  int re = 0;
  //printf("check all wp\n");
  if(pointer != NULL){
    //printf("head is not NULL\n");
  }
  while(pointer != NULL){
   bool *success = false;
   word_t ans = expr(pointer->exp,success);

    if(ans != pointer->exp_ans){
      //printf("this wp is changed\n");
      //*success = false;
      pointer -> exp_ans = expr(pointer->exp,success);
      re ++;
    }
    pointer = pointer->next;
  }
  //printf("check wp re = %d\n",re);
  return re;

}

