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
#include <difftest-def.h>
#include <memory/paddr.h>

struct REG
{
   uint64_t gpr [32];
   uint64_t pc;
};

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction){
    for(long i = 0;i < n ; i++){
      paddr_write(addr+i,1,(char)*(char *)(buf + i));
      //printf("%x\n",(unsigned char)*(char *)(buf + i));
    }
  }
  else {
    for(long i = 0 ;i < n ; i--){
      *(char *)(buf+i) = paddr_read(addr,1);
    }
  }
}

void difftest_regcpy(struct REG *dut, bool direction) {
  if(direction){
    for(int i = 1 ;i<32;i++){
      cpu.gpr[i] = dut->gpr[i];
      //printf("reg %d %lx\n",i,dut->gpr[i]);
    }
      cpu.pc = dut->pc;
      //printf("nemu is seted at pc %lx\n",dut->pc);
  }
  else {
    for(int i = 1 ;i<32;i++){
      dut->gpr[i]=cpu.gpr[i]  ;
      dut->pc = cpu.pc; 
    }
  }
  //assert(0);
}

void difftest_exec(uint64_t n) {
  //printf("difftest regcpy %ld \n",n);
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
