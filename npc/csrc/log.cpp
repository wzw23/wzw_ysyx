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

#include "common.h"
#include "iostream"
#include <assert.h>
extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
FILE *elf_fp = NULL;
void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    assert(fp);
    log_fp = fp;
  }
  printf("Log is written to %s", log_file ? log_file : "stdout");
}
//wzw add
/*void init_elf(const char *elf_file) {*/
  /*elf_fp = stdout;*/
  /*if (elf_file != NULL) {*/
    /*FILE *fp = fopen(elf_file, "rb");*/
    /*Assert(fp, "Can not open '%s'", elf_file);*/
    /*elf_fp = fp;*/
  /*}*/
  /*Log("Elf is written to %s", elf_file ? elf_file : "stdout");*/
/*}*/

/*bool log_enable() {*/
  /*return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&*/
         /*(g_nr_guest_inst <= CONFIG_TRACE_END), false);*/
/*}*/
