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

#ifndef __ISA_H__
#define __ISA_H__

// Located at src/isa/$(GUEST_ISA)/include/isa-def.h
#include <isa-def.h>

// The macro `__GUEST_ISA__` is defined in $(CFLAGS).
// It will be expanded as "x86" or "mips32" ...
typedef concat(__GUEST_ISA__, _CPU_state) CPU_state;
typedef concat(__GUEST_ISA__, _ISADecodeInfo) ISADecodeInfo;

// monitor
extern char isa_logo[];
void init_isa();

// reg
extern CPU_state cpu;
void isa_reg_display();
word_t isa_reg_str2val(const char *name, bool *success);

//wzw add ftrace struct
typedef struct Ftrace{
		int state[1024*2*2];//0为jal 1为jalr
		word_t left[1024*2*2];
		word_t right[1024*2*2];
		int length;
}Ftrace;
//Ftrace ftrace;
#define file_maxsize 4000 //此处代表能记录含有4000个函数的文件
typedef struct Sy_table{
	int length;
	uint64_t begin[file_maxsize];
	int64_t  size[file_maxsize];
	char     name[file_maxsize][200];
}Sy_table;

// exec
struct Decode;
int isa_exec_once(struct Decode *s);

// memory
enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };
#ifndef isa_mmu_check
int isa_mmu_check(vaddr_t vaddr, int len, int type);
#endif
paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);

// interrupt/exception
vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);
#define INTR_EMPTY ((word_t)-1)
word_t isa_query_intr();

// difftest
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();
#endif
