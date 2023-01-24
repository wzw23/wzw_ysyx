#include <stdint.h>
#include<sys/time.h>
#define CONFIG_BASE 0x80000000
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
/*typedef unsigned char         uint8_t;*/
/*typedef unsigned short   int uint16_t;*/
/*typedef unsigned int         uint32_t;*/
/*typedef unsigned long    int uint64_t;*/
/*typedef long             int int64_t;*/

void printh();
int parse_args(int argc, char *argv[]);
extern char *img_file;
extern char *elf_file;
extern char *log_file;
extern char *diff_so_file;
uint8_t* guest_to_host(uint32_t paddr);
//extern void put_state(svLogic prior_state);  
//文件二进制编码
#define file_maxsize 4000 //此处代表能记录含有4000个调用的文件
void load_img(int argc,char**argv);
void printfH();
typedef struct Sy_table{
	int length;
	uint64_t begin[file_maxsize];
	int64_t  size[file_maxsize];
	char     name[file_maxsize][200];
}Sy_table;
typedef struct Decode {
	  uint32_t pc;
		uint32_t snpc; // static next pc
		uint32_t dnpc; // dynamic next pc
		int state;
		//ISADecodeInfo isa;
		//IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;
void parse_elf(const char *elf_file);
void init_log(const char *log_file);
void init_difftest(char *ref_so_file, long img_size);
#define log_write(...) 		do { \
		extern FILE* log_fp; \
		{ \
		fprintf(log_fp, __VA_ARGS__); \
		fflush(log_fp); \
		} \
		} while (0) \
// macro concatenation
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define concat3(x, y, z) concat(concat(x, y), z)
#define concat4(x, y, z, w) concat3(concat(x, y), z, w)
#define concat5(x, y, z, v, w) concat4(concat(x, y), z, v, w)

// macro testing
// See https://stackoverflow.com/questions/26099745/test-if-preprocessor-symbol-is-defined-inside-macro
#define CHOOSE2nd(a, b, ...) b
#define MUX_WITH_COMMA(contain_comma, a, b) CHOOSE2nd(contain_comma a, b)
#define MUX_MACRO_PROPERTY(p, macro, a, b) MUX_WITH_COMMA(concat(p, macro), a, b)
// define placeholders for some property
#define __P_DEF_0  X,
#define __P_DEF_1  X,
#define __P_ONE_1  X,
#define __P_ZERO_0 X,
// define some selection functions based on the properties of BOOLEAN macro
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
uint64_t expr(char *e, bool *success); 		
//颜色宏定义
#define NONE         "\033[m"
#define RED          "\033[0;32;31m"
#define LIGHT_RED    "\033[1;31m"
#define GREEN        "\033[0;32;32m"
#define LIGHT_GREEN  "\033[1;32m"
#define BLUE         "\033[0;32;34m"
#define LIGHT_BLUE   "\033[1;34m"
#define DARY_GRAY    "\033[1;30m"
#define CYAN         "\033[0;36m"
#define LIGHT_CYAN   "\033[1;36m"
#define PURPLE       "\033[0;35m"
#define LIGHT_PURPLE "\033[1;35m"
#define BROWN        "\033[0;33m"
#define YELLOW       "\033[1;33m"
#define LIGHT_GRAY   "\033[0;37m"
#define WHITE        "\033[1;37m"


