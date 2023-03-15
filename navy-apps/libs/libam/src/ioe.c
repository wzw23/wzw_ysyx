#include <am.h>
#include<SDL.h>

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
  [AM_UART_CONFIG ] = __am_uart_config,
  };
bool ioe_init() {
  return true;
}

void ioe_read (int reg, void *buf) { 
	((handler_t)lut[reg])(buf);
}
void ioe_write(int reg, void *buf) { 
	((handler_t)lut[reg])(buf);
}
//wzw add
static uint32_t pre_time=0;
static uint32_t now_time=0;
struct timeval {
	long		tv_sec;			long	tv_usec;	};
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	/*uptime->us=seconds+(useconds);*/
	static int flag=0;
	gettimeofday(&nowtime_us,NULL);
	now_time=nowtime_us.tv_usec;
	if(flag==0){
		pre_time=now_time;
		/*printf("get ticks get ticksget ticksget ticksget ticksget ticks\n");*/
		flag++;
		uptime->us=0;
		return;
	}
	else{
		uptime->us=now_time-pre_time;
		return;
	}
}
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	/*int scancode=inl(KBD_ADDR);*/
	/*int mask=scancode&(0x8000);*/
	/*kbd->keydown = (mask==0x8000);*/
	/*kbd->keycode = (scancode)&0xff;*/
}
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	int high,width;
	int vmz=hig*wid*32;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = wid, .height = hig,
    .vmemsz = vmz
  };
	/**cfg = (AM_GPU_CONFIG_T) {*/
    /*.present = true, .has_accel = false,*/
    /*.width = 0, .height = 0,*/
    /*.vmemsz = 0*/
  /*};*/
}
