#include <stdio.h>
//#include <nvboard.h>
#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "sdb.h"
#include <fstream>
#include <iostream>
#include "interpreter.h"
#include "mem.h"
//#include "axi4_mem.hpp"
using namespace std;

//#define TRACE
//#define DIFF
int dump_cnt = 0;
int trace_cnt = 10000;
#ifdef DIFF
    int skip = 0;
  struct REG ref21;
  struct REG * ref1 = &ref21;
  extern uint64_t npc_reg [32];
#endif
char *img_file;
VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针

uint64_t pc_iring[32];
int iring[32];
int pc_iring_pointer = 0;



void pc_iring_add(uint64_t pc,int inst){
  pc_iring_pointer++;
  pc_iring_pointer = pc_iring_pointer%32;
  pc_iring[pc_iring_pointer] = pc;
  iring[pc_iring_pointer] = inst;
}

void print_iring(){
  for (int i =0;i<32;i++){
    
    printf("pc is %llx inst is %32x",pc_iring[i],iring[i]);
    if(i == pc_iring_pointer){
      printf("<------------");
    }
    printf("\n");
  }
}

int inst_cnt = 0;
#ifdef DIFF
int diff_test_reg(){

struct REG ref2;
struct REG * ref = &ref2;
extern uint64_t npc_reg [32];
int i =0;
  difftest_regcpy(ref, 0);
  //printf("nemu pc :%llx\n",ref->pc);
  //printf("check\n");
  #ifdef TRACE
  if(inst_cnt>=trace_cnt-1000)
    printf("nemu pc is %lx npc is %lx \n",ref->pc,top->pc_dut);
    #endif
  for (i = 1;i < 32 ; i++){
    if(npc_reg[i]!=ref->gpr[i]){
      printf("error in %d\n",inst_cnt);
      for(int j = 1;j<32;j++)
      printf("diff test reg %d : npc is %llx nemu is %llx pc is %llx nemu pc :%llx\n",j,npc_reg[j],ref->gpr[j],top->pc_dut,ref->pc);
      //print_iring();
      return 0;
    }
    
  }
  return 1;
}
long long int npc_reg1[32];
void sync_save(){
  for (int i =0;i<32;i++){
    ref1->gpr[i] = npc_reg[i];
  }
}

void sync2nemu(){
  ref1->pc = top->pc_dut;
  difftest_regcpy(ref1, 1);
  //printf("skip\n");

}
#endif
/*
void expr(int len,char *args){
  char * token;
  int  token1;
  token = strtok(args, " ");
  printf("%s\n",token);
  printf("len token :%d \n",(int )strlen(token));
  token1 =(int )strlen (token) + 1;
  printf("char :%s\n",args);

}*/



static uint8_t *pmem = NULL;
/*
void connect_wire(axi4_ptr <64,32,4> &mem_ptr,Vtop *tp){

    mem_ptr.awready = &(tp->axi_3_aw_ready);
    mem_ptr.awvalid = &(tp->axi_3_aw_valid);
    mem_ptr.awaddr = &(tp->axi_3_aw_addr);

    mem_ptr.awid = &(tp->axi_3_aw_id);
    mem_ptr.awlen = &(tp->axi_3_aw_len);
    mem_ptr.awburst = &(tp->axi_3_aw_brust);
    mem_ptr.awsize = &(tp->axi_3_aw_size);

    mem_ptr.wlast  = &(tp->axi_3_w_last);;
    mem_ptr.wstrb = &(tp->axi_3_w_strb);
    mem_ptr.wvalid = &(tp->axi_3_w_valid);
    mem_ptr.wready = &(tp->axi_3_w_ready);
    mem_ptr.wdata = &(tp->axi_3_w_data);


    mem_ptr.bvalid = &(tp->axi_3_b_valid);
    mem_ptr.bready = &(tp->axi_3_b_ready);
    mem_ptr.bresp = &(tp->axi_3_b_resp);
    mem_ptr.bid   = &(tp->axi_3_b_id);

    mem_ptr.arid = &(tp->axi_3_ar_id);
    mem_ptr.arburst = &(tp->axi_3_ar_brust);
    mem_ptr.arlen = &(tp->axi_3_ar_len);
    mem_ptr.arsize = &(tp->axi_3_ar_size);
    mem_ptr.araddr = &(tp->axi_3_ar_addr);
    mem_ptr.arvalid = &(tp->axi_3_ar_valid);
    mem_ptr.arready = &(tp->axi_3_ar_ready);

    mem_ptr.rdata = &(tp->axi_3_r_data);
    mem_ptr.rvalid = &(tp->axi_3_r_valid);
    mem_ptr.rready = &(tp->axi_3_r_ready);
    mem_ptr.rid    = &(tp->axi_3_r_id);
    mem_ptr.rlast  = &(tp->axi_3_r_last);
    mem_ptr.rresp  = &(tp->axi_3_r_resp);


}
*/
/*
void connect_wire_1(axi4_ptr <64,32,4> &mem_ptr,Vtop *tp){

    mem_ptr.awready = &(tp->axi_1_aw_ready);
    mem_ptr.awvalid = &(tp->axi_1_aw_valid);
    mem_ptr.awaddr = &(tp->axi_1_aw_addr);

    mem_ptr.awid = &(tp->axi_1_aw_id);
    mem_ptr.awlen = &(tp->axi_1_aw_len);
    mem_ptr.awburst = &(tp->axi_1_aw_brust);
    mem_ptr.awsize = &(tp->axi_1_aw_size);

    mem_ptr.wlast  = &(tp->axi_1_w_last);;
    mem_ptr.wstrb = &(tp->axi_1_w_strb);
    mem_ptr.wvalid = &(tp->axi_1_w_valid);
    mem_ptr.wready = &(tp->axi_1_w_ready);
    mem_ptr.wdata = &(tp->axi_1_w_data);


    mem_ptr.bvalid = &(tp->axi_1_b_valid);
    mem_ptr.bready = &(tp->axi_1_b_ready);
    mem_ptr.bresp = &(tp->axi_1_b_resp);
    mem_ptr.bid   = &(tp->axi_1_b_id);

    mem_ptr.arid = &(tp->axi_1_ar_id);
    mem_ptr.arburst = &(tp->axi_1_ar_brust);
    mem_ptr.arlen = &(tp->axi_1_ar_len);
    mem_ptr.arsize = &(tp->axi_1_ar_size);
    mem_ptr.araddr = &(tp->axi_1_ar_addr);
    mem_ptr.arvalid = &(tp->axi_1_ar_valid);
    mem_ptr.arready = &(tp->axi_1_ar_ready);

    mem_ptr.rdata = &(tp->axi_1_r_data);
    mem_ptr.rvalid = &(tp->axi_1_r_valid);
    mem_ptr.rready = &(tp->axi_1_r_ready);
    mem_ptr.rid    = &(tp->axi_1_r_id);
    mem_ptr.rlast  = &(tp->axi_1_r_last);
    mem_ptr.rresp  = &(tp->axi_1_r_resp);


}*/

void dump_ctl(){
  dump_cnt++;
  if(dump_cnt>=500){
    dump_cnt ==0;
    /*
    VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针

    contextp->traceEverOn(true); //打开追踪功能
    top->trace(tfp, 0); //
    */
    tfp->close();
    tfp->open("wave1.vcd"); //设置输出的文件wave.vcd
    
  }
}

int main(int argc, char** argv, char** env) {ofstream outfile;
   outfile.open("inst_log.txt");
 
   outfile << "the valid pc from the begin" << endl;

    int skip = 0;
    //axi4_ptr<64,32,4> mem_ptr;
    //axi4_ptr<64,32,4> mem_ptr_1;

    //connect_wire(mem_ptr,top);
    //connect_wire_1(mem_ptr_1,top);
    printf("checking\n");
    //mem_ptr.check();
    //mem_ptr_1.check();
    printf("check done\n");/*
    axi4_ref <64,32,4> mem_ref(mem_ptr);
    axi4     <64,32,4>  mem_sigs;
    axi4_ref <64,32,4>  mem_sigs_ref(mem_sigs);
    axi4_mem <64,32,4>  mem(4096l*1024*1024);
    mem.load_binary(argv[1],0x80000000);*/
/*
    axi4_ref <64,32,4> mem_ref_1(mem_ptr_1);
    axi4     <64,32,4>  mem_sigs_1;
    axi4_ref <64,32,4>  mem_sigs_ref_1(mem_sigs_1);
    axi4_mem <64,32,4>  mem_1(4096l*1024*1024);
    mem_1.load_binary(argv[1],0x80000000);*/
    printf("load done \n");
    img_file = argv[1];
 
    difftest_init(1); 
    load_img();


    contextp->commandArgs(argc, argv);

    contextp->traceEverOn(true); //打开追踪功能
    #ifdef TRACE
      
      top->trace(tfp, 0); //
      tfp->open("wave.vcd"); //设置输出的文件wave.vcd
    #endif
    printf("npc run\n");
    top->rst_n = 1;
    top->clk = 0;

    top->eval();    
    #ifdef TRACE
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    #endif
    top->clk = 1;
    top->rst_n = 0;   
    //mem_sigs.update_input(mem_ref);printf("npc run update input down\n");
    top->eval();
    #ifdef TRACE
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    #endif
            //mem.beat(mem_sigs_ref);
    //mem_sigs.update_output(mem_ref);
    top->clk = 0;
  
  int status = 1;
  while (!contextp->gotFinish()&&status){
    
    top->eval();
    #ifdef TRACE
      if(inst_cnt>=trace_cnt-10000){
      tfp->dump(contextp->time()); //dump wave
      contextp->timeInc(1); //推动仿真时间
      }
    #endif

    #ifdef DIFF

    if(top->stop_n==1){
      inst_cnt++;
      //outfile << hex <<top->pc_dut<<"  "<<i++<<endl;
      //printf("npc pc is %llx\n",top->pc_dut);
      if(top->skip){
        //printf("skip to %llx\n",top->pc_dut);
        skip=1;
        sync_save();
      }
      else {
        if(skip){
          skip=0;
          sync2nemu();
        }
        difftest_exec(1);
        if(!diff_test_reg()){
          printf("error\n");
          status = 0;
        }
    }
   }
   #endif
    
    top->rst_n = 1;
    top->clk = 1;


    //mem_sigs.update_input(mem_ref);
    //mem_sigs_1.update_input(mem_ref_1);

    top->eval();
    
    #ifdef TRACE
    if(inst_cnt>=trace_cnt-100){
      tfp->dump(contextp->time()); //dump wave
      contextp->timeInc(1); //推动仿真时间
    }
    //dump_ctl();
    #endif
    //mem_1.beat(mem_sigs_ref_1);
    //mem_sigs_1.update_output(mem_ref_1);
    //mem.beat(mem_sigs_ref);
   // mem_sigs.update_output(mem_ref);

    top->clk = 0;

    //
  }




  //sdb_mainloop();


  for(int i =0;i<=2000;i++){

    top->eval();
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间

    top->rst_n = 1;
    top->clk = 1;

    //mem_sigs.update_input(mem_ref);

    top->eval();
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间

    //mem.beat(mem_sigs_ref);
    //mem_sigs.update_output(mem_ref);


    top->clk = 0;
  }
  delete top;
  tfp->close();
  delete contextp;
  outfile.close();
  return 0;
}
