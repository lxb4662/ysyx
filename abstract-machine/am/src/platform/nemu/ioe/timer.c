#include <am.h>
#include <nemu.h>
static AM_TIMER_UPTIME_T init_time;
void __am_timer_init() {
  init_time.us = *(volatile uint64_t   *)0xa0000048;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us =  *(volatile uint32_t *)(RTC_ADDR)+((uint64_t)*(volatile uint32_t *)(RTC_ADDR+4)<<32)- init_time.us;
  uptime->us =  inl(RTC_ADDR)+((uint64_t)inl(RTC_ADDR+4)<<32)- init_time.us;
  //uptime->us = (uint64_t)*(volatile int64_t *)(RTC_ADDR)- init_time.us;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
