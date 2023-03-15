#include <common.h>
#include "syscall.h"
//wzw add
#include "/home/wzw/ysyx-workbench/nemu/include/generated/autoconf.h"
#include "/home/wzw/ysyx-workbench/nanos-lite/include/proc.h"
/*enum {*/
  /*SYS_exit,*/
  /*SYS_yield,*/
  /*SYS_open,*/
  /*SYS_read,*/
  /*SYS_write,*/
  /*SYS_kill,*/
  /*SYS_getpid,*/
  /*SYS_close,*/
  /*SYS_lseek,*/
  /*SYS_brk,*/
  /*SYS_fstat,*/
  /*SYS_time,*/
  /*SYS_signal,*/
  /*SYS_execve,*/
  /*SYS_fork,*/
  /*SYS_link,*/
  /*SYS_unlink,*/
  /*SYS_wait,*/
  /*SYS_times,*/
  /*SYS_gettimeofday*/
/*};*/
//wzw add
extern void naive_uload(PCB *pcb, const char *filename);
///////////
static const char *img[20] = {
	"SYS_exit",
	"SYS_yield",
	"SYS_open",
	"SYS_read",
	"SYS_write",
	"SYS_kill",
	"SYS_getpid",
	"SYS_close",
	"SYS_lseek",
	"SYS_brk",
	"SYS_fstat",
	"SYS_time",
	"SYS_signal",
	"SYS_execve",
	"SYS_fork",
	"SYS_link",
	"SYS_unlink",
	"SYS_wait",
	"SYS_times",
	"SYS_gettimeofday"
};
extern int fs_open(const char *pathname, int flags, int mode);
extern size_t fs_read(int fd, void *buf, size_t len);
extern size_t fs_write(int fd, const void *buf, size_t len);
extern size_t fs_lseek(int fd, size_t offset, int whence);
extern int fs_close(int fd);
struct timeval {
	long		tv_sec;		/* seconds */
	long	    tv_usec;	/* and microseconds */
};
void do_syscall(Context *c) {
	/*printf("program_bre=%ld\n",(uint64_t)Pro_bre);*/
  uintptr_t a[4];
  a[0] = c->GPR1;//a7
	a[1] = c->GPR2;//a0
	a[2] = c->GPR3;//a1
	a[3] = c->GPR4;//a2
	//wzw add 注：对变量赋值不能用a 

	/*char *str="13";*/
	/*putch(*str);*/
	/*putch('\n');*/
	/*int ceshi=a[0];*/
#ifdef CONFIG_STRACE_COND
	Log("name:%s args:a7=%ld,a0=%ld,a1=%ld,a2=%ld,a0=%ld",img[a[0]],a[0],a[1],a[2],a[3],c->GPRx);
#endif

  switch (a[0]) {
		case SYS_yield:
			/*Log("name:yield args:a7=%ld,a0=%ld,a1=%ld,a2=%ld,a0=%ld",a[0],a[1],a[2],a[3],c->GPRx);*/
			yield();c->GPRx=0;
			break; 
		case SYS_exit:
			/*char *exit_use="/bin/menu";*/
			/*naive_uload(current,(char *)exit_use);*/
			halt(a[1]);break;
		case SYS_write:
			/*Log("name:write args:a7=%d,a0=%d,a1=%d,a2=%d",c->gpr[17],c->gpr[10],c->gpr[11],c->gpr[12]);*/
			/*if((a[1]==1)||(a[2]==2)){*/
				/*for(int i=0;i<a[3];i++)*/
					/*putch(*((char *)a[2]+i));*/
				/*c->GPRx=a[3];*/
			/*}*/
			/*else */
				/*c->GPRx=-1;*/
			/*else */
			c->GPRx=fs_write(a[1],(char *)a[2],a[3]);
			break;
		case SYS_read:
			c->GPRx=fs_read(a[1],(char *)a[2],a[3]);
		break;
		case SYS_brk:
			/*char *fh=Pro_bre;*/
			/*Pro_bre+=a[1];*/
			/*c->GPRx=(uint64_t)fh;*/
			c->GPRx=0;
			break;
		case SYS_open:
			c->GPRx=fs_open((char *)a[1],a[2],a[3]);
			break;
		case SYS_lseek:
			c->GPRx=fs_lseek(a[1],a[2],a[3]);
			break;
		case SYS_close:
			c->GPRx=fs_close(a[1]);
			break;
		case SYS_gettimeofday:
			struct timeval *nowtime=(struct timeval *)a[1];			
			(*nowtime).tv_sec=io_read(AM_TIMER_UPTIME).us/1000000;
			(*nowtime).tv_usec=io_read(AM_TIMER_UPTIME).us%1000000;
			c->GPRx=0;
			break;
		case SYS_execve:
			static PCB pcb_boot = {};
			PCB *current = NULL;
			current = &pcb_boot;
			printf("%s\n",a[1]);
			naive_uload(current,(char *)a[1]);
			break;
    default: panic("Unhandled syscall ID = %d,and the name is %s", a[0],img[a[0]]);
  }
#ifdef CONFIG_STRACE_COND
	Log("syscall return:%ld",c->GPRx);
#endif
}
