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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	cpu.pc=0x80000000;
	if (direction == DIFFTEST_TO_REF) {
		printf("memcpy hello\n");
		for(int i=0;i<n;i++)
		{
			paddr_write(addr+i,1,*((uint8_t*)buf+i));
		}
 /*   for(int i=0;i<n/4;i++)*/
		/*{*/
			/*printf("paddrread=%08lx\n",paddr_read(addr+i*4,4));*/
		/*}*/
	} else {
		assert(0);
	}
}

void difftest_regcpy(void *dut, bool direction) {
	uint64_t *cpugpr=(uint64_t *)dut;
	if (direction == DIFFTEST_TO_REF) {
		for(int i=0;i<32;i++)
			cpu.gpr[i]=cpugpr[i];
		cpu.pc=cpugpr[32];

		static int csr_first=0;
		if(csr_first==0){
		cpu.csrs[768]=cpugpr[33];
		cpu.csrs[773]=cpugpr[34];
		cpu.csrs[833]=cpugpr[35];
		cpu.csrs[834]=cpugpr[36];
		csr_first=1;
		}

	} else {
		for(int i=0;i<32;i++)
			cpugpr[i]=cpu.gpr[i];
		//第33个寄存器存pc的值
			cpugpr[32]=cpu.pc;
	}
	//for(int i=0;i<32;i++)
	//		printf("cpu.gpr[%d]=%ld\n",i,cpu.gpr[i]);
  /*printf("cpu.pc=%lx\n",cpu.pc);*/

  //assert(0);
}

void difftest_exec(uint64_t n) {
	cpu_exec(n);
 // assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
