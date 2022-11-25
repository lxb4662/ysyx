#include <common.h>
void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD :{ printf("this is a yield evet %d \n",e.event); break;}
    case EVENT_SYSCALL :{do_syscall(c); break;}
    case EVENT_ERROR :{  break;}
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

int init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
  //cte_init in am
  Log("Initializing interrupt/exception handler down");
  return 0;
}
