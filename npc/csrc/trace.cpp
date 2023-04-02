//接受字节表的数组
#include"common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern Sy_table func;
int space=0;
char ftrace[10000][200];//代表ftrace语句
char spacea[10000][200];
static int ftracelength=0;
extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void ftrace_use(int call,int ret,int  pc){
	if(call){
		//printf("udnpc=%lx\n",udnpc);
		for (int j=0;j<func.length;j++){
			//printf("func.begin[j]=%lx",func.begin[j]);
			if((pc>=(int)func.begin[j])&&(pc<(int)func.begin[j]+func.size[j])){
				//log_write("%*s",space,"");
				//printf(" %lx:  jal  ret %s\n",ftrace.left[i],func.name[j]);
				//log_write(" %x:    call %s(%x)\n",pc,func.name[j],dnpc);
				if(ftracelength<10000){
					sprintf(spacea[ftracelength],"%*s",space,"");
					sprintf(ftrace[ftracelength]," %x:    call %s(%x)\n",pc,func.name[j],pc);
					ftracelength++;
					space++;}
				break;
			}
		}
	}
	if(ret){
		for (int j=0;j<func.length;j++){
			if((pc>=(int)func.begin[j])&&(pc<(int)func.begin[j]+func.size[j])){
				space--;
				//log_write("%*s",space,"");

				if(ftracelength<10000){
					sprintf(spacea[ftracelength],"%*s",space,"");
					sprintf(ftrace[ftracelength++]," %x:    ret %s(%x)\n",pc,func.name[j],pc);
				}
				break;
			}
		}
	}
	return;
}
void ftrace_write(){
log_write("----------ftrace-----------\n");
		for(int i=0;i<ftracelength;i++){
			if(ftracelength<10000){
			log_write("%s",spacea[i]);
			log_write("%s",ftrace[i]);
			}			
			}
}
void itrace_use(char *logbuf,uint64_t upc,uint32_t instval){
	int snpc=upc+4;
			 char *p = logbuf;
			 p += snprintf(p, 200, "0x%016x  :",upc);
			 int ilen = snpc - upc;
			 int i;
			 uint8_t *inst = (uint8_t *)&instval;
			 for (i = ilen - 1; i >= 0; i --) {
				 p+=snprintf(p, 4, " %02x", inst[i]);
			 }
			 int ilen_max = MUXDEF(1, 8, 4);
			 int space_len = ilen_max - ilen;
			 if (space_len < 0) space_len = 0;
			 space_len = space_len * 3 + 1;
			 memset(p, ' ', space_len);
			 p += space_len;
			 disassemble(p, logbuf + 200 - p,//注意此处与下面区别 由于传递的是指针 所以不能用sizeof
					 MUXDEF(1, upc, upc), (uint8_t *)&instval,ilen);
			 log_write("%s\n",logbuf);
}
/*if(TEST){*/
				/*if(!top->clk&&contextp->time()>=4){*/
			 /*int snpc=upc+4;*/
			 /*char *p = logbuf;*/
			 /*p += snprintf(p, sizeof(logbuf), "0x%016x  :", upc);*/
			 /*int ilen = snpc - upc;*/
			 /*int i;*/
			 /*uint8_t *inst = (uint8_t *)&instval;*/
			 /*for (i = ilen - 1; i >= 0; i --) {*/
				 /*p+=snprintf(p, 4, " %02x", inst[i]);*/
			 /*}*/
			 /*int ilen_max = MUXDEF(1, 8, 4);*/
			 /*int space_len = ilen_max - ilen;*/
			 /*if (space_len < 0) space_len = 0;*/
			 /*space_len = space_len * 3 + 1;*/
			 /*memset(p, ' ', space_len);*/
			 /*p += space_len;*/

			 /*disassemble(p, logbuf + sizeof(logbuf) - p,*/
					 /*MUXDEF(1, upc, upc), (uint8_t *)&instval,ilen);*/
			 /*if(TEST){*/
			 /*log_write("%s\n",logbuf);*/
			 /*}*/
			/*}*/
				/*if(!top->not_have&&!top->rst)	{*/
					/*printf(YELLOW"%s is not have, please add\n"NONE,logbuf);*/
					/*break;}*/
				/*}*/
