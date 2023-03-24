#include "common.h"
#include<stdio.h>
using namespace std;
extern uint64_t get_time();
extern void update_screen();
#define TIMER_HZ 60
void device_update() {
	//printf("use device_update\n");
  static uint64_t last = 0;
  uint64_t now = get_time();
	static int jishu=0;
	jishu++;
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;
	static int time_hz=0;
	time_hz++;
	if(time_hz==60){
	printf("mips=%d\n",jishu);
	jishu=0;
  time_hz=0;	
	}
  //IFDEF(CONFIG_HAS_VGA, vga_update_screen());
		update_screen();
/*#ifndef CONFIG_TARGET_AM*/
  /*SDL_Event event;*/
  /*while (SDL_PollEvent(&event)) {*/
    /*switch (event.type) {*/
      /*case SDL_QUIT:*/
        /*nemu_state.state = NEMU_QUIT;*/
        /*break;*/
/*#ifdef CONFIG_HAS_KEYBOARD*/
      /*// If a key was pressed*/
      /*case SDL_KEYDOWN:*/
      /*case SDL_KEYUP: {*/
        /*uint8_t k = event.key.keysym.scancode;*/
        /*bool is_keydown = (event.key.type == SDL_KEYDOWN);*/
        /*send_key(k, is_keydown);*/
        /*break;*/
      /*}*/
/*#endif*/
      /*default: break;*/
    /*}*/
  //}
//#endif
	//printf("use device_update2\n");
}
void init_device() {
  /*IFDEF(CONFIG_TARGET_AM, ioe_init());*/
  /*init_map();*/

  /*IFDEF(CONFIG_HAS_SERIAL, init_serial());*/
  /*IFDEF(CONFIG_HAS_TIMER, init_timer());*/
  //IFDEF(CONFIG_HAS_VGA, init_vga());
	init_screen();
	printf("use here just first\n");
/*  IFDEF(CONFIG_HAS_KEYBOARD, init_i8042());*/
  /*IFDEF(CONFIG_HAS_AUDIO, init_audio());*/
  /*IFDEF(CONFIG_HAS_DISK, init_disk());*/
  /*IFDEF(CONFIG_HAS_SDCARD, init_sdcard());*/

  /*IFNDEF(CONFIG_TARGET_AM, init_alarm());*/
}

