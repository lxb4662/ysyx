#include "sdb.h"
#include "stdio.h"
#include "interpreter.h"
#include <readline.h>
#include <history.h>
#include <stdlib.h>
#include <assert.h>



static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}


#define NR_CMD 9

static int cmd_c(char *args) {
  //exec_end();
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_info(char *args) {
  printf("this is a info cmd\n");
  if(args){
    if(args[0]=='r'){
        struct REG ref2;
        struct REG * ref = &ref2;
        extern uint64_t npc_reg [32];
        difftest_regcpy(ref, 0);
        
        for (int i = 0;i < 32 ; i++)
            printf("diff test reg %d : npc is %llx nemu is %llx pc is %llx nemu pc :%llx\n",i,npc_reg[i],ref->gpr[i],ref->pc);

    }
    if(args[0]=='w'){
      //rint_wp();
    }
  }
  else {
    printf("need a args this command did not excu\n");
  }
  return 0;
}




static int cmd_si(char *args) {
  //cpu_exec(atoi(args));
  int a = 0;
  a = atoi(args);
  printf("cmd si %d \n",a);
  /*for(int i = 0;i<a;){
    if( exec_diff()){
      i++;
    }
    else {
      i = a;
    }
  }*/
  return 0;
}
static int cmd_x(char *args) {
  //bool *success = false;
  /*
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
  }*/
  return 0;
}

static int cmd_w(char *args) {
  //new_wp(args);
  return 0;
}
static int cmd_p(char *args) {
  /*bool *success = false;
  printf("p:%lld\n",(long long int)expr(args,success));
  printf("p:0x%llx\n",(long long int)expr(args,success));*/
  return 0;
}

static int cmd_d(char *args) {
 /* bool *success = false;
  printf("p:%lld\n",(long long int)expr(args,success));
  printf("p:0x%llx\n",(long long int)expr(args,success));*/
  return 0;
}

static int cmd_help(char *args){
  printf("cmd_help\n");
  return 0;
}

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




void sdb_mainloop() {

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


void print_ref_reg(){
  struct REG ref3;
  struct REG * ref = &ref3;
  extern uint64_t npc_reg [32];
  difftest_regcpy(ref, 0);
  for(int i = 0;i<32;i++){
    printf("ref reg %d %llx\n",i,ref->gpr[i]);
  }
}