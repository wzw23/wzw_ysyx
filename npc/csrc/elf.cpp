//wzw add the c file 详细看yjsfirst/elftest.c
#include "common.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>
#include "iostream"
//#define file_maxsize 4000 //此处代表能记录含有4000个函数的文件
//typedef struct Sy_table{
//	int length;
//	uint64_t begin[file_maxsize];
//	int64_t  size[file_maxsize];
//	char     name[file_maxsize][200];
//}Sy_table;
Sy_table func;
void parse_elf(const char *elf_file){
	FILE *fp;
	fp = fopen(elf_file, "r");
	//assert (fp!=NULL);
	if(fp==NULL)
		return ;
	//获取head
	Elf64_Ehdr elf_head;
	int flag;
	flag=fread(&elf_head,sizeof(Elf64_Ehdr),1,fp);	
	assert(flag!=0);
	//初始化shdr
	Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
	assert(shdr!=NULL);
	//设置偏移量
	flag = fseek(fp, elf_head.e_shoff, SEEK_SET); 
	assert(flag==0);
	//读取section到shdr
	flag=fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	assert(flag!=0);
	// 将fp指针移到 字符串表偏移位置处
	fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);
	// 第e_shstrndx项是字符串表 定义 字节 长度 char类型 数组
	//char shstrtab [shdr[elf_head.e_shstrndx].sh_size];
	//char *sh_str = shstrtab;
	// 读取字符串表内容
	//flag = fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp);
	//assert(flag!=0);

	//输出section的内容
	/*printf(" idx offset     load-addr  size       algn"*/
						/*" flags      type       section\n");*/
	/*for(int i=0; i<elf_head.e_shnum; i++) {*/
		/*printf(" %03d ", i);*/
		/*printf("0x%08lx ", shdr[i].sh_offset);*/
		/*printf("0x%08lx ", shdr[i].sh_addr);*/
		/*printf("0x%08lx ", shdr[i].sh_size);*/
		/*printf("%4ld ", shdr[i].sh_addralign);*/
		/*printf("0x%08lx ", shdr[i].sh_flags);*/
		/*printf("0x%08x ", shdr[i].sh_type);*/
		/*printf("%s\t", (sh_str + shdr[i].sh_name));*/
		/*printf("\n");*/
	/*}*/
	//找到含有symbol tabl的节
	uint32_t i;
	for(i=0; i<elf_head.e_shnum; i++) {
		if ((shdr[i].sh_type==SHT_SYMTAB)
				|| (shdr[i].sh_type==SHT_DYNSYM)) {
			//printf("\n[Section %03d]\n", i);
			//print_symbol_table(fd, eh, shdr, i);
///////////////////////////////////////////////			//////////////////////////////////////
Elf64_Sym *sydr = (Elf64_Sym*)malloc(sizeof(Elf64_Sym) * shdr[i].sh_size);
fseek(fp, shdr[i].sh_offset, SEEK_SET);
flag = fread(sydr, shdr[i].sh_size, 1, fp);
assert(flag!=0);
///////////
//读取systr
uint32_t systrtab_ndx = shdr[i].sh_link;
char systrtab [shdr[i].sh_size];
fseek(fp, shdr[systrtab_ndx].sh_offset, SEEK_SET);
flag = fread(systrtab, shdr[systrtab_ndx].sh_size, 1, fp);
assert(flag!=0);
char *sy_str = systrtab;
//////////
uint32_t symbol_count = (shdr[i].sh_size/sizeof(Elf64_Sym));
for(uint32_t j=0; j< symbol_count; j++) {
	//printf("0x%08lx ", sydr[j].st_value);//输出位置
	if(ELF32_ST_TYPE(sydr[j].st_info)==2){
		//printf("0x%08lx ", sydr[j].st_value);//输出位置
		func.begin[func.length]=sydr[j].st_value;
		//printf("0x%02x ", ELF32_ST_BIND(sydr[j].st_info));
		//printf("type=0x%02x ", ELF32_ST_TYPE(sydr[j].st_info));//2的话代表function
																													 //注意加完后是>=&&<
		//printf("size=%ld ",								  sydr[j].st_size);//输出大小
		func.size[func.length]=sydr[j].st_size;
		//printf("%s\n", (sy_str + sydr[j].st_name));//输出名字
		strcpy(func.name[func.length],sy_str + sydr[j].st_name);
		func.length++;
}
}
//////////////////////////////////////////////			/////////////////////////////////////
				
	free(sydr);
		}
	}

//	printf("success\n");
//  for (int j=0;j<func.length;j++){
//		printf("%s  ", func.name[j]);//输出名字
//		printf("0x%08lx ", func.begin[j]);//输出位置
//		printf("size=%ld\n ",func.size[j]);//输出大小
//	}
//		
//	printf("success\n");

	free(shdr);
			
	}
