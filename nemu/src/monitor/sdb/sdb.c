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
#include <memory/vaddr.h>
#include "sdb.h"
#include <stdlib.h>
#include <stdio.h>
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

static int cmd_info(char *args) {
  printf("this is a info cmd\n");
  if(args){
    if(args[0]=='r'){
      isa_reg_display();
    }
    if(args[0]=='w'){
      print_wp();
    }
  }
  else {
    printf("need a args this command did not excu\n");
  }
  return 0;
}
static int cmd_si(char *args) {
  cpu_exec(atoi(args));
  return 0;
}
static int cmd_x(char *args) {
  //bool *success = false;
  char *args1 = strtok(args," ");
  char *args2 = args1+strlen(args1)+1;
  
  printf("x cmd read data number %d,adderss %s\n",atoi(args1),args2);
  //expr(args2,success);
  //printf("%s,%s",args1,args2);
    for(int i =0 ;i< atoi(args1);i++){
      int data ;
      sscanf(args2,"%x",&data) ;
      char a;a = vaddr_read(data + i,1);
    //uint8_t data = vaddr_read(stoi(args2[2],0,16),1);
    printf("**************%d \t %c\n",(unsigned int) a,a);
  }
  return 0;
}

static int cmd_w(char *args) {
  new_wp(args);
  return 0;
}
static int cmd_p(char *args) {
  bool *success = false;
  printf("p:%lld\n",(long long int)expr(args,success));
  printf("p:0x%llx\n",(long long int)expr(args,success));
  return 0;
}

static int cmd_d(char *args) {
  bool *success = false;
  printf("p:%lld\n",(long long int)expr(args,success));
  printf("p:0x%llx\n",(long long int)expr(args,success));
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
  { "si", "zhi xing zhi ding shu mu de zhi ling ", cmd_si },
  { "info", "cha xun ji cun qi huo zhe nei cun", cmd_info },
  { "w", "cha ru jian shi dian ", cmd_w },
  { "x", "cun chu qi du qv ", cmd_x },
  { "d", "shan chu jian shi dian ", cmd_d },
  { "p", "ji suan biao da shi", cmd_p },

  /* TODO: Add more commands */

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
