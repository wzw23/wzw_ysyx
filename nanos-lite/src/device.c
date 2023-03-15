#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
	for(int i=0;i<len;i++)
					putch(*((char *)buf+i));
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
	/*printf("get here\n");*/
	AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
	char str[300];
	sprintf(str,"%s %s",ev.keydown ? "kd" : "ku",keyname[ev.keycode]);
	memcpy(buf,str,len);
	if(strcmp(keyname[ev.keycode],"NONE")==0)
		return 0;
	else 
		return 1;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
	int w=io_read(AM_GPU_CONFIG).width ;
	int h = io_read(AM_GPU_CONFIG).height ;
	sprintf(buf,"WIDTH:%d\nHIGH:%d\n",w,h);
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
	/*struct use{*/
		/*int var3;*/
		/*int var4;*/
	/*};*/
	int x=(offset/4)%400;
	int y=(offset/4-x)/400+1;
	/*struct use* use1=(struct use *)len;*/
	io_write(AM_GPU_FBDRAW, x, y, (char *)buf, len/4, 1, true);
	/*io_write(AM_GPU_FBDRAW, x, y, (char *)buf, use1->var3, use1->var4, true);*/
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
