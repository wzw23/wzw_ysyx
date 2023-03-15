#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  return 1;
}

uint32_t SDL_GetTicks() {
  /*return 0;*/
  return NDL_GetTicks();
}

void SDL_Delay(uint32_t ms) {
	uint32_t pre=NDL_GetTicks();
	while(1){
		uint32_t now=NDL_GetTicks();
		if(now-pre>=ms)
			break;
	}
}
