#include "trap.h"

unsigned test[] = {
	0x12345678, 0x98765432, 0x0, 0xeffa1000, 0x7fffffff, 0x80000000, 0x33, 0xffffffff
};

unsigned srl_ans[] = {
	0x2468ac, 0x130eca8, 0x0, 0x1dff420, 0xffffff, 0x1000000, 0x0, 0x1ffffff
};

unsigned srlv_ans[] = {
	0x1234567, 0x4c3b2a1, 0x0, 0x1dff420, 0x7fffff, 0x400000, 0x0, 0x1fffff
};

unsigned srav_ans[] = {
	0x1234567, 0xfcc3b2a1, 0x0, 0xffdff420, 0x7fffff, 0xffc00000, 0x0, 0xffffffff
};


int main() {
	unsigned i;


	long long int a [] = {	0x12345670000, 0xfcc3b2a10000, 0x0, 0xffdff4200000, 0x7fffff0000, 0xffc0000000000, 0x0, 0xffffffff00000000};
	long long int bb [] = {	0x12345670000, 0xfcc3b2a1, 0x0, 0xffdff420, 0x7fffff, 0xffc00000, 0x0, 0xffffffff};
	for(i = 0; i < LENGTH(test); i ++) {
		check((test[i] >> 7) == srl_ans[i]);
	}

	for(i = 0; i < LENGTH(test); i ++) {
		check((unsigned)((int)test[i] >> (i + 4)) == srav_ans[i]);
	}

	for(i = 0; i < LENGTH(test); i ++) {
		check((test[i] >> (i + 4)) == srlv_ans[i]);
	}

	for(i = 0; i < LENGTH(test); i ++) {
		for(int j = 0;j<=60;j++){
			printf("a[i]==%d",a[i]>>j);
		}
	}
	long long int c = 0xffffffff81000000;
	int d = 24;
	c = c >> d;
	printf("%d\n",c);
	printf("%d\n",bb[0]);
	bb[0] = bb[0] +1 ;
	return 0;
}
