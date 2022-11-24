#include <am.h>

#include <stdio.h>
#ifdef IOE_T
static AM_TIMER_UPTIME_T _init_time_record;
#endif
void __am_timer_init() {
  #ifdef IOE_T
   _init_time_record.us = *(volatile uint32_t   *)0xa0000048 & ((uint64_t)(*(volatile uint32_t   *)0xa000004f)<<32);
  #endif
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = *(volatile uint32_t   *)0xa0000048 + ((uint64_t)(*(volatile uint32_t   *)0xa000004f)<<32) - _init_time_record.us;
  //uptime->us = 0; 
  #ifdef IOE_T
    uptime->us = *(volatile uint32_t   *)0xa0000048 + ((uint64_t)(*(volatile uint32_t   *)0xa000004f)<<32) - _init_time_record.us;
  #endif
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
