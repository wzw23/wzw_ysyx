#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

//仅用于内部使用
char* itoa(int i,char *strout,int base)
{
char *str=strout;
int digit,sign=0;
if(i<0){
sign=1;
i*=-1;
}
while(i){
digit=i%base;
*str=(digit>9)?('A'+digit-10):'0'+digit;
i=i/base;
str++;
}
if(sign){
*str++='-';
}
*str='\0';
strrev(strout);
return strout;
panic("Not implemented");
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
/* Convert char */
case 'c':{
out[j]=(char)va_arg(ap,int);
j++;
break;
}
/* Convert decimal */
case 'd':{
itoa(va_arg(ap,int),tmp,10);
strcpy(&out[j],tmp);
j+=strlen(tmp);
break;
}
/* Convert hex */
//case 'x': {
//  _itoa(va_arg( vl, int ), tmp, 16);
//  strcpy(&buff[j], tmp);
//  j += strlen(tmp);
//  break;
//}
///* Convert octal */
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
panic("Not implemented");
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
