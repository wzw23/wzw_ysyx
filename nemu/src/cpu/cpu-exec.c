/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
//wzw add
#include <elf.h>
//#include "/home/wzw/ysyx-workbench/nemu/src/monitor/sdb/watchpoint.c"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
CPU_state cpu = {};
//wzw add
//extern int quanjubianliangtest;
//extern struct Ftrace{};
extern Ftrace ftrace;
//extern FILE *elf_fp;
//extern char *elf_file;
extern Sy_table func;


#define iringbuf_MAXSIZE 7
typedef struct{
	char s[iringbuf_MAXSIZE][200];
	int rear;
}iringbuf;

static iringbuf initiringbuf(iringbuf ib){
	ib.rear=0;	
	return ib;
}

static iringbuf ib;
static iringbuf eniringbuf(iringbuf ib,char *str){
	sprintf(ib.s[ib.rear],"%s",str);
	//printf("ib.s=%s\n",ib.s[ib.rear]);
	ib.rear=(ib.rear+1)%(iringbuf_MAXSIZE);
	//printf("id rear=%d\nstr=%s\n",ib.rear,str);

	return ib;
}
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
void watchpoint_exam();
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) {
	  //log_write("nemustat=%d\n", nemu_state.state); 
		char logbuf[200];
		log_write("%s\n",_this->logbuf);
		if(nemu_state.state!=NEMU_RUNNING){	 
		////////////////////////////////ftrace//////////////////////////////////////
		//assert(elf_fp!=NULL);	
		//printf(" elffile=%s\n",elf_file);
		//ftrace
		log_write("//////////////ftrace//////////////");	
		int space=0;
		for(int i=0;i<ftrace.length;i++){
			//printf(" %lx:  jalorjalr	%lx\n",ftrace.left[i],ftrace.right[i]);
			if(ftrace.state[i]==0){
			int j=0;
			//int j2=0;
			int flag=0;
			for (j=0;j<func.length;j++){
					//if((ftrace.left[i]>=func.begin[j])&&(ftrace.left[i]<func.begin[j]+func.size[j]))
					  if(ftrace.right[i]==func.begin[j]){
							flag=1;//存在call设置信号为1
						  log_write("%*s",space,"");	
							log_write(" %lx:  jal  call %s(%lx)\n",ftrace.left[i],func.name[j],ftrace.right[i]);
							space++;
							break;
						}
						/*else if((ftrace.right[i]>func.begin[j])&&(ftrace.right[i]<func.begin[j]+func.size[j])){*/
							/*printf(" %lx:  jal  ret %s(%lx)\n,",ftrace.left[i],func.name[j],ftrace.right[i]);*/
							/*break;*/
						/*}*/
			}
			if(flag==0){//如果为call那就是ret
				for (j=0;j<func.length;j++){
						if((ftrace.left[i]>func.begin[j])&&(ftrace.left[i]<func.begin[j]+func.size[j])){
							space--;
						  log_write("%*s",space,"");	
							//printf(" %lx:  jal  ret %s\n",ftrace.left[i],func.name[j]);
							log_write(" %lx:  jal  ret %s(%lx)\n",ftrace.left[i],func.name[j],ftrace.right[i]);
							break;
						}
				}
			}
			
			}
			else{
				int j=0;
				//int j2=0;
				int flag=0;
				for (j=0;j<func.length;j++){
					//if((ftrace.left[i]>=func.begin[j])&&(ftrace.left[i]<func.begin[j]+func.size[j]))
					if(ftrace.right[i]==func.begin[j]){
						flag=1;
						log_write("%*s",space,"");	
						log_write(" %lx:  jalr  call %s(%lx)\n",ftrace.left[i],func.name[j],ftrace.right[i]);
						space++;
						break;
					}
				}
				if(flag==0){
					for (j=0;j<func.length;j++){
						if((ftrace.left[i]>func.begin[j])&&(ftrace.left[i]<func.begin[j]+func.size[j])){
							space--;
							log_write("%*s",space,"");	
							log_write(" %lx:  jalr  ret %s(%lx)\n",ftrace.left[i],func.name[j],ftrace.right[i]);
							break;
						}
					}

			//printf(" %lx:  jalr  %lx\n",ftrace.left[i],ftrace.right[i]);
			}
		}}

		log_write("/////////////////////////////////");	
		////////////////////////////////////////////////////////////////////////////
	  //printf("ftrace");
	//	for (int j=0;j<func.length;j++){
	//		printf("%s  ", func.name[j]);//输出名字
	//		printf("0x%08lx ", func.begin[j]);//输出位置
	//		printf("size=%ld\n ",func.size[j]);//输出大小
	//	}
		/////
		if(nemu_state.state==NEMU_ABORT){	 
			sprintf(logbuf,"-->%s\n",_this->logbuf);
			//	log_write("%s", logbuf); 
			ib=eniringbuf(ib,logbuf);
			//log_write("------------iringbuf------------\n");
			for(int i=0;i<iringbuf_MAXSIZE;i++){
				printf("%s",ib.s[i]);
				//log_write("%s",ib.s[i]);
			}
			//log_write("--------------------------------");
		}
		}else{
			sprintf(logbuf,"   %s\n",_this->logbuf);
			//log_write("%s pc=%lx", logbuf,cpu.pc);
			ib=eniringbuf(ib,logbuf);
		} 
	}

#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  //w_exam();
	//log_write("nemustat1=%d\n", nemu_state.state); 
  IFDEF(CONFIG_WATCHPOINT,watchpoint_exam());
	//log_write("nemustat2=%d\n", nemu_state.state); 

   
  }

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}
static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    //wzw add
    //printf("cpu.pc=0X%lx\n",cpu.pc);
		   exec_once(&s, cpu.pc);
		//printf("finishexec_once\n");
    g_nr_guest_inst ++;
    //wzw add the next line
    //watchpoint_exam();
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING){ 
	    //log_write("nemustatlast=%d\n", nemu_state.state); 
	    //printf("nemustat=%d\n", nemu_state.state); 
			break;}

    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
	//printf("s->logbuf%s\n",cpu.logbuf);
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
	ib=initiringbuf(ib);
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
		  return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
		      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
