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
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NEQ,TK_REG,TK_HEX,TK_NUM,TK_MUL,TK_ADD,TK_DIV,TK_SUB,TK_BRR,TK_BRL,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"==", TK_EQ},        // equal
  
  {"!=", TK_NEQ},        // equal
  {"\\+", TK_ADD},         // plus
  {"-", TK_SUB},        // equal
  {"\\*", TK_MUL},        // equal
  {"/", TK_DIV},        // equal
  {"0x[0-z]+", TK_HEX},        // equal
  {"\\$([0-9]|[a-z])+", TK_REG},        // equal
  {"0|([0-9][0-9]*)", TK_NUM},        // equal
  {"\\(", TK_BRL},        // equal
  {"\\)", TK_BRR},        // equal
  
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

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex, position, substr_len, substr_len, substr_start);
        position += substr_len;
        tokens[nr_token].type = rules[i].token_type;
        strncpy(tokens[nr_token].str, substr_start, substr_len);
        tokens[nr_token].str[substr_len] = '\0';
        //printf("token %s,%d\n",tokens[nr_token].str,tokens[nr_token].type);
        

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        /*
        switch (rules[i].token_type) {
          TK_ADD: tokens[nr_token].type = TK_ADD;

          default: TODO();
        }*/
        nr_token++;
        break;
      }
    }

    if (i == NR_REGEX) {
      //printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


int has_brk(int p,int q){
  int l = 0;
  int r = 0;
  for (int i = p ;i<=q;i++){
    if(tokens[i].type==TK_BRL){
      l++;
    }
    else {
      if(tokens[i].type==TK_BRR){
        r++;
      }
    }
  }
  if((l==r)&(l!=0)&(tokens[p].type == TK_BRL)&(tokens[q].type == TK_BRR)){
    return 1;
  }
  else {
    return 0;
  }
}

int get_main_op(int p,int q){
  int bk_cnt=0;
  int tk_pre = TK_NOTYPE;
  for(int i = p;i<=q;i++){
    if((tokens[i].type == TK_BRL)){
      //printf("L\n");
      bk_cnt++;
      continue;
    }else {
      if((tokens[i].type == TK_BRR)){
      //printf("R\n");
        bk_cnt--;
        continue;
      } 
      else if(bk_cnt==0)
      {
        //printf("L=R\n");
        if((tokens[i].type == TK_MUL)||(tokens[i].type == TK_ADD)||(tokens[i].type == TK_SUB)||(tokens[i].type == TK_DIV)||(tokens[i].type == TK_EQ)||(tokens[i].type == TK_NEQ)){
          //printf("+-*/\n");
          if((tk_pre != TK_NOTYPE)&&(tk_pre != TK_ADD)&&(tk_pre != TK_SUB)&&(tk_pre != TK_MUL)&&(tk_pre != TK_DIV)&&(tk_pre != TK_EQ)&&(tk_pre != TK_NEQ)){
            //printf("main op is %d",i);
            return i;
          }
        }
      }
    }
    tk_pre = tokens[i].type;
  }
  return 0;
}
word_t eval(int p,int q){
  //printf("eval %d %d \n",p,q);
  //char *unused;
  if(p==q){
    //printf("p = q\n");
    switch(tokens[p].type){
      case TK_HEX: return strtol(tokens[p].str,'\0',16);
      case TK_NUM: return atoi(tokens[p].str);
      case TK_REG: {
        if(!strcmp((char *)(tokens[p].str+1),"pc")){
          //printf("reg pc\n");
          return cpu.pc;
        }
        else {
          printf("reg :%d\n",atoi(tokens[p].str+1));
          return cpu.gpr[atoi(tokens[p].str+1)];
        }
      }
    
    }
  }
  else {
    if((p+1)==q){

      //printf("p+1 = q\n");
        if(tokens[p].type==TK_MUL){
          //printf("address is :%ld \n",strtol(tokens[q].str,'\0',16));
          return vaddr_read(0x80000000+strtol(tokens[q].str,'\0',16),1);
        }
    }
    else {
  
      if(has_brk(p,q)){
        //printf("has brk\n");
        eval(p+1,q-1);
      }
      else {
        //printf("get op ");
        int op = get_main_op(p,q);
        //printf("%d\n", op);
        switch(tokens[op].type){
          case TK_ADD:{  return (eval(p,op-1)+eval(op+1,q));}
          case TK_DIV:{  return (eval(p,op-1)/eval(op+1,q));}
          case TK_MUL:{  return (eval(p,op-1)+eval(op+1,q));}
          case TK_SUB:{  return (eval(p,op-1)-eval(op+1,q));}
          case TK_EQ: {  return (eval(p,op-1)==eval(op+1,q));}
          case TK_NEQ:{  return (eval(p,op-1)!=eval(op+1,q));}
        }
      }
    }

  }
  
  return 0;
}


word_t expr(char *e, bool *success) {
  //printf("expr\n");
  
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  //printf("nr_tkone is %d \n",nr_token);
  word_t re;
  re = eval(0,nr_token-1);
  //printf("expr is : %ld\n",re);
  return re;
}
