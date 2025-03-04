#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void volatile putch(char ch) {
  #ifdef IOE_T
  *(volatile uint8_t  *)0xa00003f8 = ch; 
  #endif
}

void halt(int code) {
  npc_trap(code);
  while(1);
}
void fence(){
  asm volatile("fence.i");
}
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
