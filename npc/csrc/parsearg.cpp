#include "common.h"
#include <assert.h>
#include <iostream>
#include <string.h>
#include <getopt.h>
//接收参数
long img_size;
char *log_file = NULL;


char *elf_file = NULL;

char *diff_so_file = NULL;
char *img_file = NULL;
static int difftest_port = 1234;
static const uint32_t img [] = {
		// 0x800002b7,  // lui t0,0x80000
		// 0x0002a023,  // sw  zero,0(t0)
		// 0x0002a503,  // lw  a0,0(t0)
		// 0x00100073,  // ebreak (used as nemu_trap)
	0x0c4b0b13, //addi    s6,s6,196
	0x0c4b0b13, //addi    s6,s6,196
	0x00009117, //        auipc sp,0x9
	0x00c000ef,  //          jal ra,80000018
	0x0c4b0b13, //addi    s6,s6,196
	0x2f0b8b93, //addi    s7,s7,752
	0x0c4b0b13, //addi    s6,s6,196 
	0x00100073  //break
};
int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"log"      , required_argument, NULL, 'l'},
		{"img"      , required_argument, NULL, 'm'},
		{"diff"     , required_argument, NULL, 'd'},
		{"port"     , required_argument, NULL, 'p'},
		{"help"     , no_argument      , NULL, 'h'},
		{0          , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-bhl:e:d:p:m:", table, NULL)) != -1) {
		switch (o) {
			case 'p': sscanf(optarg, "%d", &difftest_port); break;
			case 'l': log_file = optarg; break;
			case 'e': elf_file = optarg; break;
			case 'd': diff_so_file = optarg; break;
			case 'm': img_file = optarg; return 0;
		}
	}
	return 0;
}
void load_img(int argc,char**argv){

	//printf("\naaaaaaaaaaaaaaaaaaaaaaaa\n");
	//parse_args(argc,argv);
	    //将代码复制到内存
	if(img_file==NULL)
		memcpy(guest_to_host((uint32_t)CONFIG_BASE), img, sizeof(img));
	else{//对文件进行解析
		FILE *fp = fopen(img_file, "rb");


		fseek(fp, 0, SEEK_END);
		long size = ftell(fp);
		printf("The image is %s, size = %ld", img_file, size);
		fseek(fp, 0, SEEK_SET);
		int ret = fread(guest_to_host((uint32_t)CONFIG_BASE), size, 1, fp);
		assert(ret == 1);


		img_size=size;

		/*printf("\naaaaaaaaaaaaaaaaaaaaaaaa\n");*/
		/*uint32_t img2[size/4];	*/
		/*printf("The image is %s, size = %ld", img_file, size);*/

		/*fseek(fp, 0, SEEK_SET);*/
		/*int ret = fread(img2, size, 1, fp);*/
		/*assert(ret == 1);*/
		fclose(fp);
		/*for(int i=0;i<(size/4);i++){*/
			/*printf("img2[i]=%x\n",img2[i]);*/
		/*}*/

	/*printf("\naaaaaaaaaaaaaaaaaaaaaaaa\n");*/

		/*memcpy(guest_to_host((uint32_t)CONFIG_BASE), img2, size);*/
	/*printf("\naaaaaaaaaaaaaaaaaaaaaaaa\n");*/
	}
}

