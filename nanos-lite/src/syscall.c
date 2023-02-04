#include <common.h>
#include "syscall.h"
enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};
extern char _end;
char * Pro_bre=&(_end);
void do_syscall(Context *c) {
	printf("program_bre=%ld\n",(uint64_t)Pro_bre);
  uintptr_t a[4];
  a[0] = c->GPR1;//a7
	a[1] = c->GPR2;//a0
	a[2] = c->GPR3;//a1
	a[3] = c->GPR4;//a2
	//wzw add 注：对变量赋值不能用a 

	/*char *str="13";*/
	/*putch(*str);*/
	putch('\n');
  switch (a[0]) {
		case SYS_yield:
			Log("name:yield args:a7=%ld,a0=%ld,a1=%ld,a2=%ld,a0=%ld",a[0],a[1],a[2],a[3],c->GPRx);
			yield();c->GPRx=0;
			break; 
		case SYS_exit:
			Log("name:exit args:a7=%ld,a0=%ld,a1=%ld,a2=%ld,a0=%ld",a[0],a[1],a[2],a[3],c->GPRx);
			halt(a[1]);break;
		case SYS_write:
			Log("name:write args:a7=%ld,a0=%ld,a1=%ld,a2=%ld,a0=%ld",a[0],a[1],a[2],a[3],c->GPRx);
			/*Log("name:write args:a7=%d,a0=%d,a1=%d,a2=%d",c->gpr[17],c->gpr[10],c->gpr[11],c->gpr[12]);*/
			if((a[1]==1)||(a[2]==2)){
				for(int i=0;i<a[3];i++)
					putch(*((char *)a[2]+i));
			  c->GPRx=a[3];
			}
			else 
				c->GPRx=-1;
			break;
		case SYS_brk:
			Log("name:brk args:a7=%d,a0=%d,a1=%d,a2=%d,a0=%d",a[0],a[1],a[2],a[3],c->GPRx);
			char *fh=Pro_bre;
			Pro_bre+=a[1];
			c->GPRx=(uint64_t)fh;
			break;
    default: panic("Unhandled syscall ID = %d", a[0]);

  }
	Log("syscall return:%ld",c->GPRx);
}
