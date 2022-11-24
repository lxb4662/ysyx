#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  int i = 0;
  va_list ap;
  va_start(ap, fmt);
  while(fmt[i]!='\0'){
    if(fmt[i]=='%'){
      i++;
      if(fmt[i]=='s'){
        int k = 0;
        char *ss = va_arg(ap, char *);
        while(ss[k]!='\0'){
          putch(ss[k]);
          k++;
        }
      }
      if(fmt[i]=='d'){
        char dd[100] = {0};
        int d = va_arg(ap, int);
        if(d==0){
          putch('0');
        }
        else{
          itoa(d,dd,10);
          int k = 0;
          while(dd[k]!='\0'){
            putch(dd[k]);
            k++;
          }
        }
      }
    }
    else {
      putch(fmt[i]);

    }
    i++;
  }
  return 0;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int i = 0;
  int j = 0;
   va_list ap;
    va_start(ap, fmt);
  while(fmt[i]!='\0'){
    if(fmt[i]=='%'){
      i++;
      if(fmt[i]=='s'){
        int k = 0;
        char *ss = va_arg(ap, char *);
        while(ss[k]!='\0'){
          out[j] = ss[k];
          j++;
          k++;
        }
      }
      if(fmt[i]=='d'){
        char dd[100] = {0};
        int d = va_arg(ap, int);
        itoa(d,dd,10);
        int k = 0;
        while(dd[k]!='\0'){
          out[j] = dd[k];
          j++;
          k++;
        }
      }
    }
    else {
      out[j] = fmt[i];
      j++;
    }
    i++;
  }
  out[j] = '\0';
  return 0;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
