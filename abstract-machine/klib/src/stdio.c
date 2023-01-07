#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char print_buf[1024*2*1024];//设置最多输出2G数据
int printf(const char *fmt, ...) {
	va_list ap;
	unsigned int length;

	va_start (ap, fmt);
	length=vsprintf(print_buf,fmt,ap);
	va_end (ap);

	for(int i=0;i<length;i++){
		putch(print_buf[i]);
		}
	return length;
	

	panic("not implemented");
}

//仅用于内部使用
/*char* itoa(int i,char *strout,int base)*/
/*{*/
/*char *str=strout;*/
/*int digit,sign=0;*/
/*if(i<0){*/
/*sign=1;*/
/*i*=-1;*/
/*}*/
/*while(i){*/
/*digit=i%base;*/
/**str=(digit>9)?('a'+digit-10):'0'+digit;*/
/*i=i/base;*/
/*str++;*/
/*}*/
/*if(sign){*/
/**str++='-';*/
/*}*/
/**str='\0';*/
/*strrev(strout);*/
/*return strout;*/
/*panic("not implemented");*/
/*}*/
void my_itoa(int i, char *string)
{
	char *str=string;
	int sign=0;
	int digit;
	if(i==-2147483648){
		strcpy(string,"-2147483648\0");
		return;
	}
	if(i<0){
		sign=1;
		i=i*-1;
	}
	if(i==0){
		*str='0';
		str++;	
	}
	while(i){
		digit=i%10;	
		*str='0'+digit;
		i=i/10;
		str++;
	//	len++;
	}		
	if(sign){
		*str++='-';
	//	len++;	
	}
	*str='\0';
	//char *right=string+len;
	//char *left=string;
	strrev(string);
	}
int vsprintf(char *out, const char *fmt, va_list ap) {
int i=0;
int j=0;
char tmp[20];
char* str_arg;
while (fmt&&fmt[i])
{
if(fmt[i]=='%'){
i++;
switch(fmt[i]){
/* convert char */
case 'c':{
out[j]=(char)va_arg(ap,int);
j++;
break;
}
/* convert decimal */
case 'd':{
//itoa(va_arg(ap,int),tmp,10);
my_itoa(va_arg(ap,int),tmp);
strcpy(&out[j],tmp);
j+=strlen(tmp);
break;
}
/* convert hex */
//case 'x': {
//  _itoa(va_arg( vl, int ), tmp, 16);
//  strcpy(&buff[j], tmp);
//  j += strlen(tmp);
//  break;
//}
///* convert octal */
//case 'o': {
//  _itoa(va_arg( vl, int ), tmp, 8);
//  strcpy(&buff[j], tmp);
//  j += strlen(tmp);
//  break;
//}
/* copy string */
case's':{
str_arg=va_arg(ap,char*);
strcpy(&out[j],str_arg);
j+=strlen(str_arg);
break;
}
}
}else{
out[j]=fmt[i];
j++;
}
i++;
}
out[j]='\0';
return j;
panic("not implemented");
}
 
int sprintf(char *out, const char *fmt, ...) {
  //记录fmt对应的地址
  va_list args;
  int val;
  //得到首个%对应的字符地址
  va_start(args, fmt);
  val= vsprintf(out, fmt, args);
  va_end(args);
  return val;
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
