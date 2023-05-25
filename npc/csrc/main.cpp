#include <stdio.h>
//#include <nvboard.h>
#include "Vtop_soc.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "sdb.h"
#include<fstream>
#include<iostream>
#include "interpreter.h"
#include "mem.h"
//#include "axi4_mem.hpp"
using namespace std;
//#define TRACE
//#define ITRACE
//#define PRINT
#define DIFF
//#define mtrace
#include <unistd.h>


  
riscv npc;
riscv nemu;


static uint8_t *pmem = NULL;

void get_nemu(){
  REG nemu_st;
  difftest_regcpy(&nemu_st, 0);
  for(int i =1;i<=31;i++){
    nemu.reg[i] = nemu_st.gpr[i];
    #ifdef PRINT
    printf("nemu reg %2d :  %16llx\n",i ,nemu_st.gpr[i]);
    #endif
  }
    nemu.pc = nemu_st.pc;
    #ifdef PRINT
    printf("nemu pc %8x\n" ,nemu.pc);
    #endif
}

void sync_to_nemu(uint64_t pc,riscv *reg_npc){
  REG nemu_st;
  for(int i = 1;i<32;i++){
    nemu_st.gpr[i] = reg_npc->reg[i];
  }
  nemu_st.pc = pc;
  difftest_regcpy(&nemu_st, 1);
}


void reset_soc(Vtop_soc *top,VerilatedVcdC* tfp,VerilatedContext* contextp){
  top->clock = 0;
  top->reset = 1;
  top->eval();
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间

  top->clock = 1;
  top->reset = 1;
  top->eval();
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间

  
  top->clock = 0;
  top->reset = 0;
  top->eval();
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间

  top->clock = 1;
  top->reset = 0;
  top->eval();
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间
}


void run_one_clk_soc(Vtop_soc *top,VerilatedVcdC* tfp,VerilatedContext* contextp){
  top->clock = 0;
  top->reset = 0;
  top->eval();
  #ifdef TRACE
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
  #endif
  top->clock = 1;
  top->reset = 0;
  top->eval();
  #ifdef TRACE
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
  #endif
}
void print_riscv(riscv *riscv){
  printf("PC: %lx\n",riscv->pc);
  for(int i =0;i<32;i++){
    printf("reg %d : %lx\n",i,riscv->reg[i]);
  }
}

int run_one_without_dump(Vtop_soc *top){
{
  riscv last_npc;

  last_npc = riscv(npc);

  top->clock = 0;
  top->reset = 0;
  top->eval();


  top->clock = 1;
  top->reset = 0;
  top->eval();

  #ifdef DIFF
  if(npc.valid){
    if(npc.incache){
      difftest_exec(1);
      get_nemu();
      for(int i = 1;i<32;i++){
        if(npc.reg[i]!=nemu.reg[i]){
          printf("reg %d is error npc is %16lx\n",i,npc.reg[i]);
          printf("*********************NEMU*****************\n");
          print_riscv(&nemu);          
          printf("*********************NPC *****************\n");
          print_riscv(&last_npc);
          return 0;
        }
      }
    }
    else {
      riscv last_npc;
      while(1){
          last_npc.copy(&npc);
          top->clock = 0;
          top->reset = 0;
          top->eval();


          top->clock = 1;
          top->reset = 0;
          top->eval();
          if(npc.valid&&npc.incache){
            break;
          }
      }
      sync_to_nemu(npc.pc,&last_npc);
      difftest_exec(1);      
      get_nemu(); 
      for(int i = 1;i<32;i++){
        if(npc.reg[i]!=nemu.reg[i]){
          printf("reg %d is error npc is %16lx\n",i,npc.reg[i]);
          return 0;
        }
      }
    }
    /*if(npc.pc!=nemu.pc){
      return 0;
    }*/
  }
  #endif
  return 1;
}
}





int run_one_clk_soc_with_test(Vtop_soc *top,VerilatedVcdC* tfp,VerilatedContext* contextp){
  riscv last_npc;

  last_npc = riscv(npc);

  top->clock = 0;
  top->reset = 0;
  top->eval();
  #ifdef TRACE
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间
  #endif

  top->clock = 1;
  top->reset = 0;
  top->eval();
  #ifdef TRACE
  tfp->dump(contextp->time()); //dump wave
  contextp->timeInc(1); //推动仿真时间
  #endif
  #ifdef DIFF
  if(npc.valid){
    if(npc.incache){
      difftest_exec(1);
      get_nemu();
      for(int i = 1;i<32;i++){
        if(npc.reg[i]!=nemu.reg[i]){
          printf("reg %d is error npc is %16lx\n",i,npc.reg[i]);
          printf("*********************NEMU*****************\n");
          print_riscv(&nemu);          
          printf("*********************NPC *****************\n");
          print_riscv(&last_npc);
          return 0;
        }
      }
    }
    else {
      riscv last_npc;
      while(1){
          last_npc.copy(&npc);
          top->clock = 0;
          top->reset = 0;
          top->eval();
          #ifdef TRACE
          tfp->dump(contextp->time()); //dump wave
          contextp->timeInc(1); //推动仿真时间
          #endif

          top->clock = 1;
          top->reset = 0;
          top->eval();
          #ifdef TRACE
          tfp->dump(contextp->time()); //dump wave
          contextp->timeInc(1); //推动仿真时间
          #endif
          if(npc.valid&&npc.incache){
            break;
          }
      }
      sync_to_nemu(npc.pc,&last_npc);
      difftest_exec(1);      
      get_nemu(); 
      for(int i = 1;i<32;i++){
        if(npc.reg[i]!=nemu.reg[i]){
          printf("reg %d is error npc is %16lx\n",i,npc.reg[i]);
          return 0;
        }
      }
    }
    /*if(npc.pc!=nemu.pc){
      return 0;
    }*/
  }
  #endif
  return 1;
}

void cut_vcd(int length){


  truncate("wave.vcd", length); 

}


int prin_time() {
    char len[20] = {0};

    time_t timep;
    time(&timep);

    struct tm *p;
    p = gmtime(&timep);

    snprintf(len, 20, "%d-%d-%d %d:%d:%d", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, 8 + p->tm_hour, p->tm_min, p->tm_sec);

    printf("\n%s\n", len);
    return 0;
}
int get_second(){
  int sec = time((time_t *)NULL);
    
    //time_t * tloc;
    //int sec = time(tloc);

    //printf("%d\n", sec);
    return sec;
}


int main(int argc, char** argv, char** env) {

  printf("img path is :%s",argv[1]);
  difftest_init(1);
  load_img(argv[1]);
  prin_time();  
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop_soc* top = new Vtop_soc{contextp};
  
 
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd
  tfp->close();


  
  //sdb_mainloop();
  //////////////////////////////
  // run
  //////////////////////////////
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd
  reset_soc(top,tfp,contextp);

  long int clk_cnt = 1;
  int begin_time = get_second();
  while(!Verilated::gotFinish()){
    clk_cnt ++;
    if(!run_one_clk_soc_with_test(top,tfp,contextp)){
      printf("error: pc %8lx\n",npc.pc);
      break;
    };
    #ifdef TRACE
    if(contextp->time()%800000==0){
      tfp->close();
      tfp->open("wave.vcd"); //设置输出的文件wave.vcd
    }
    #endif
    if(clk_cnt%10000000==0){
    	printf("clock pre second %ld \n",(clk_cnt/(get_second()-begin_time)));
    }
  }

  sdb_mainloop();


  for (int i =0;i<=500;i++){
    run_one_clk_soc(top,tfp,contextp);
  }


  

}
