#include <am.h>
//wzw add
#include "npc.h"
#define SYNC_ADDR (VGACTL_ADDR + 4)
void __am_gpu_init() {
		/*int i;*/
		/*int w = io_read(AM_GPU_CONFIG).width ;*/
		/*int h = io_read(AM_GPU_CONFIG).height ;*/
		/*//int w = 0;  // TODO: get the correct width*/
		/*//int h = 0;  // TODO: get the correct height*/
		/*uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;*/
		/*for (i = 0; i < w * h; i ++) fb[i] = i;*/
		/*outl(SYNC_ADDR, 1);*/
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	int wid_hig=inl(VGACTL_ADDR);
	int hig=wid_hig&0xffff;
	int wid=(wid_hig>>16);
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

/*static void *memcpy(void *out, const void *in, size_t n) {*/
	/*char *csrc=(char*)in;*/
	/*char *cdest=(char*)out;*/
	/*for(int i=0;i<n;i++)*/
		/*cdest[i]=csrc[i];*/
	/*return cdest;*/
	/*panic("Not implemented");*/
/*}*/
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
		/*int wl = io_read(AM_GPU_CONFIG).width ;*/
		/*int w=ctl->w;*/
		/*int h=ctl->h;*/
		int wl = io_read(AM_GPU_CONFIG).width ;
		/*printf("use fbdraw\n");*/
		/*int hl = io_read(AM_GPU_CONFIG).height ;*/
		/*int min;*/
		/*int x=ctl->x;*/
		/*int y=ctl->y;*/
		/*if(wl-x<w)*/
			/*min=wl-x;*/
		/*else */
			/*min=w;*/
		/*int size_pixels_copy=sizeof(uint32_t)*min;*/
		uint32_t *color_buf=(uint32_t *)ctl->pixels;
		uint32_t *fb = (uint32_t *)(uintptr_t)(0xa1000000);
		for(int h=0;h<ctl->h;h++){
			for(int w=0;w<ctl->w;w++){
				fb[(ctl->y+h)*wl+w+ctl->x]=color_buf[h*(ctl->w)+w];
			}}
		/*for(int i = 0;i<h&&y+i<hl;i++){*/
				/*memcpy(&fb[(y + i) * wl + x], color_buf, size_pixels_copy);*/
				/*color_buf += w;*/
			/*}*/
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
		/*printf("use sync success\n");*/
  }
		/*printf("finish use fbdraw\n");*/
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}

