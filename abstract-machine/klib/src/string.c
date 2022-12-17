#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
    int count=0;
    while(*(s++))
        count++;
    return count;
 // panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
    size_t i;
    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
  //panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dst[i] = src[i];
    for ( ; i < n; i++)
        dst[i] = '\0';
    return dst;
  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
    int  dst_len = strlen(dst);
    int  i;
    for (i = 0 ; src[i] != '\0' ; i++)
        dst[dst_len + i] = src[i];
    dst[dst_len + i] = '\0';
    return dst;
  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
    //All compares done as if `char` was `unsigned char`
    const unsigned char *us1 = (const unsigned char *) s1;
    const unsigned char *us2 = (const unsigned char *) s2;

    // As long as the data is the same and '\0' not found, iterate
    if((NULL == us1)||(NULL == us2)){
        return -2;
    }
    while((*us1!='\0')&&(*us1==*us2))
    {
        us1++;
        us2++;
    }
    if(*us1>*us2){
        return 1;
    }
    else if(*us1<*us2){
        return -1;
    }else 
        return 0;
      //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}
char* strrev(char* str)
{
    assert(str != NULL);//断言
    char *left = str;
    char *right = str + strlen(str) - 1;

    while (left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;

        left++;
        right--;
    }
    return str;
    panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
    size_t i;
    char *str=(char *)s;
    for(i=0;i<n;i++)
        str[i]=c;
    return str;
  //panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *p = (unsigned char *)s1;
    unsigned char *q = (unsigned char *)s2;
    int charCompareStatus = 0;
    if (s1 == s2)
        {
            return charCompareStatus;
        }
    while (n > 0)
    {
        if (*p != *q)
        {  //compare the mismatching character
            charCompareStatus = (*p >*q)?1:-1;
            break;
        }
        n--;
        p++;
        q++;
    }
    return charCompareStatus;
    //panic("Not implemented");
}

#endif
