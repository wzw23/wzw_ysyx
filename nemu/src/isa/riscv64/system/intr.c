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

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
	cpu.csrs[0x341]=epc;
	cpu.csrs[0x342]=NO;
	log_write("\netrace:ecall at:%lx\n,and the NO is %lx",epc,NO);
  /*return 0;*/
	/*for(int i=0;i<32;i++)*/
				/*printf("gpr[%d]=%ld\n",i,cpu.gpr[i]);*/
	/*printf("mcause=%ld\n",cpu.csrs[0x342]);*/
	/*printf("mstatus=%ld\n",cpu.csrs[0x300]);*/
	/*printf("mepc=%ld\n",cpu.csrs[0x341]);*/

	/*printf("\ncpu_csr=%ld\n",cpu.csrs[0x305]);*/
	return cpu.csrs[0x305];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
