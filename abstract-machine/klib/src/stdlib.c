#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}


char *itoa(int value,char *string,int radix)
{
	char zm[37]="0123456789abcdefghijklmnopqrstuvwxyz";
	char aa[100]={0};
 
	int sum=value;
	char *cp=string;
	int i=0;
	
	if(value<0)
	{
		*cp = '-';
    cp++;
    sum = abs(value);
	}
	
 
	while(sum>0)
	{
		aa[i++]=zm[sum%radix];
		sum/=radix;
	}
 
	for(int j=i-1;j>=0;j--)
	{
		*cp=aa[j];
    cp++;
	}
	*cp='\0';
	return string;
}


static char* addr = NULL;
void *malloc(size_t size) {
  if(!addr) addr = (char*)ROUNDUP(heap.start, 8);
  char* ret = addr;
  size = ROUNDUP(size, 8);
  addr += size;
  return ret;

  if(!addr){
    addr = heap.start;
  }
  void * re = addr;
  addr = addr + size;
  return re ;

}
void free(void *ptr) {
}

#endif
