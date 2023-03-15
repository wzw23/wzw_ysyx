#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*wzw add*/
#include <sys/time.h>
/*#include <types.h>*/
#include <sys/types.h>//这里提供类型pid_t和size_t的定义
#include <sys/stat.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

/*extern int _gettimeofday(struct timeval *tv, struct timezone *tz);*/
/*extern off_t _lseek(int fd, off_t offset, int whence);*/
/*extern int _open(const char *path, int flags, mode_t mode);*/
/*extern int _read(int fd, void *buf, size_t count);*/
/*extern int _write(int fd, void *buf, size_t count);*/
static int full_w=0,full_h=0;
static int cavas_w=0,cavas_h=0;
static struct  timeval  nowtime_us;
static int ndl_open=0;
static uint32_t pre_time=0;
static uint32_t now_time=0;
uint32_t NDL_GetTicks() {
	/*printf("get ticks get ticksget ticksget ticksget ticksget ticks\n");*/
	/*if(ndl_open){*/
	static int flag=0;
	gettimeofday(&nowtime_us,NULL);
	now_time=nowtime_us.tv_sec*1000+nowtime_us.tv_usec/1000;
	if(flag==0){
		pre_time=now_time;	
		/*printf("get ticks get ticksget ticksget ticksget ticksget ticks\n");*/
		flag++;
		return 0;
	}
	else{
		return now_time-pre_time;
	}
	/*return nowtime_us.tv_sec*1000+nowtime_us.tv_usec/1000;*/
	/*printf("sec=%d usec=%d",nowtime_us.tv_sec,nowtime_us.tv_usec);*/
	/*}*/
	/*else{*/
		/*printf("ndl isn't init\n");*/
  /*return 0;}*/
}

int NDL_PollEvent(char *buf, int len) {
	/*FILE *fp = fopen("/dev/events", "r+");*/
	/*if(fp==NULL)*/
		/*printf("should not get here\n");*/
	int fd=open("/dev/events",0,0);
	/*printf("fd=%d\n");*/
	int length=read(fd,buf,len);
	/*if(length!=0)*/
		/*printf("len=%d buflen=%d length=%d\n",len,strlen(buf),length);*/
	/*printf("get here0\n");*/
	/*int length=fread(buf,len,1,fp);*/
	/*printf("get here\n");*/
	/*printf("buf=%s length=%d\n",buf,length);*/
	/*printf("%d\n",length);*/
	if(length!=0){
		/*printf("len=%d buflen=%d length=%d\n",len,strlen(buf),length);*/
		return 1;}
	else 
		return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
		cavas_w=*w;cavas_h=*h;
		if((*w==0)||(*h==0))
		{cavas_w=full_w;cavas_h=full_h;
		 *w=full_w;*h=full_h;	
		}
		printf("screen w=%d,screen_h=%d\n",cavas_w,cavas_h);
}

/*#if defined(__ISA_RISCV64__)*/
/*void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {*/
	/*[>printf("here\n");<]*/
	/*int use_x=full_w/2-cavas_w/2+x;*/
	/*int use_y=full_h/2-cavas_h/2+y;*/
	/*int offset=(use_y-1)*400+use_x;*/
	/*int fd=open("/dev/fb",0,0);*/
	/*struct use{*/
		/*int var3;*/
		/*int var4;*/
	/*};*/
	/*struct use offset1;*/
	/*offset1.var3=w;*/
	/*offset1.var4=h;*/
	/*lseek(fd,offset*4,SEEK_SET);*/
	/*write(fd,pixels,(size_t)&offset1);*/
/*}*/
/*#else*/
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	int use_x=full_w/2-cavas_w/2+x;
	int use_y=full_h/2-cavas_h/2+y;
	/*printf("full_w=%d fll_h=%d cavas_w=%d cavas_h=%d\n",full_w,full_h,cavas_w,cavas_h);*/
	int offset=(use_y-1)*400+use_x;
	int fd=open("/dev/fb",0,0);
	for(int i=0;i<h;i++)
	{	
		lseek(fd,offset*4+full_w*i*4,SEEK_SET);
		write(fd,pixels+i*w,w*4);
	}
}
/*#endif*/

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
	ndl_open=1;
	char buf[60];
	int len=60;
	///对屏幕长宽赋值///
	int fd=open("/proc/dispinfo",0,0);
	read(fd,buf,len);
	printf("%s",buf);
	strtok(buf,":");
	char *width=strtok(NULL,"\n");
	full_w=atoi(width);
	strtok(NULL,":");
	char *high=strtok(NULL,"\n");
	full_h=atoi(high);
	printf("full_w=%d full_h=%d\n",full_w,full_h);
	printf("%s",buf);
  return 0;
	///////////////////
}

void NDL_Quit() {
	ndl_open=0;
}
