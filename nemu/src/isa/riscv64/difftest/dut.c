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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
    //printf("diff checkout reg \n");
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu.gpr[i]){
      for (int j = 0;j<32;j++)
        printf("reg error %2d ref:%16lx gpr:%16lx nemu pc is %lx spike pc is %lx\n",j,ref_r->gpr[j],cpu.gpr[j],cpu.pc,ref_r->pc);
      return false;
    }
  }
  return true;
}

void isa_difftest_attach() {
}
