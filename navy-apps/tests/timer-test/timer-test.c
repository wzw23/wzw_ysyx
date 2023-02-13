#include <stdint.h>
#include<stdio.h>
/*#include <sys/time.h>*/
#include <NDL.h>

#ifdef __ISA_NATIVE__
#error can not support ISA=native
#endif

#define SYS_gettimeofday 19
extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);
/*extern int _gettimeofday(struct timeval *tv, struct timezone *tz);*/
/*struct  timeval  nowtime_us;*/
/*extern uint32_t NDL_GetTicks();*/

int main() {
	int sec = 1;
	NDL_Init(1);
	while (1) {
		while(1){
		/*_gettimeofday(&nowtime_us,NULL);*/
		uint32_t nowtime_ms=NDL_GetTicks();
		if(nowtime_ms/ 1000 >= sec){
			printf("here");
			printf("%d\n",nowtime_ms);
			break;}
		}
		/*rtc = io_read(AM_TIMER_RTC);*/
		/*printf("%d-%d-%d %02d:%02d:%02d GMT (", rtc.year, rtc.month, rtc.day, rtc.hour, rtc.minute, rtc.second);*/
		if (sec == 1) {
			printf("%d second).\n", sec);
		} else {
			printf("%d seconds).\n", sec);
			/*printf("%ld seconds).\n", nowtime_us.tv_sec);*/
		}
		sec ++;
  } 
  return _syscall_(SYS_gettimeofday, 0, 0, 0);
}
