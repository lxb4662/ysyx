#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  //printf("__am_irq_handle %d\n",(int )c->mcause);
  if (user_handler) {
    Event ev = {0};             // the mcause from ecall is always 11 or 0xb
    switch (c->mcause) {
      case -1: ev.event = EVENT_YIELD; break;
      case 0: case 1: case 2: case 3: case 4: case 5: case 6:
      case 7: case 8: case 9: case 10: case 11: case 12:
      case 13: case 14: case 15: case 16: case 17: case 18:
      case 19: ev.event = EVENT_SYSCALL; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);    // this function is do event; do_event func call do_system func to accomplish the system call;
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
