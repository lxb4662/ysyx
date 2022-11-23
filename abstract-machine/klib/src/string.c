#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  //panic("Not implemented");
  int i = 0;
  while(s[i]!='\0'){
    i++;
  }
  return i;

}

char *strcpy(char *dst, const char *src) {
  int i = 0;
  while(src[i]!='\0'){
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  int i = 0;
  for(i=0;i<n;i++){
    dst[i] = src[i];
  }
  dst[n] = '\0';
  return dst;
  //panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  int i = 0;
  int j = 0;
  while(dst[i]!='\0'){
    i++;
  }
  while(src[j]!='\0'){
    dst[i] = src[j];
    i++;
    j++;
  }
  dst[i]='\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int i = 0;
  //printf("%s %s\n",s1,s2);
  while(s1[i]!='\0'){
    if(s1[i]==s2[i]){
      i++;
    }
    else {
      if(s1[i]<s2[i]){
        return -1;
      }
      else {
        return 1;
      }
    }
  }
  if(s2[i]=='\0'){
    //printf("00000000000\n");
    return 0;
  }
  else {
    return -1;
    }
  //panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char *dest = (char *)s;
  for (int i=0;i<n;i++){
    dest[i] = (char )c;
  } 
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  int i = 0;
  for(i = 0;i<n;i++){
    *(char *)(out+i) = *(char *)(in + i);
  }
  return (void *)out;
  //panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  char *p1 = (char *)s1;
  char *p2 = (char *)s2;
  for(int i = 0;i<n;i++){
    if(p1[i]<p2[i]){
      return -1;
    }
    else {
      if(p1[i]>p2[i]){
        return 1;
      }
    }
  }
  return 0;
  //panic("Not implemented");
}

#endif
