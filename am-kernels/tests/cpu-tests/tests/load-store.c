#include "trap.h"

unsigned short mem[] = {
	0x0, 0x0258, 0x4abc, 0x7fff, 0x8000, 0x8100, 0xabcd, 0xffff
};

unsigned lh_ans[] = {
	0x00000000, 0x00000258, 0x00004abc, 0x00007fff, 0xffff8000, 0xffff8100, 0xffffabcd, 0xffffffff
};

unsigned lhu_ans[] = {
	0x00000000, 0x00000258, 0x00004abc, 0x00007fff, 0x00008000, 0x00008100, 0x0000abcd, 0x0000ffff
};

unsigned  sh_ans[] = {
	0x0000fffd, 0x0000fff7, 0x0000ffdf, 0x0000ff7f, 0x0000fdff, 0x0000f7ff, 0x0000dfff, 0x00007fff
};

unsigned  lwlr_ans[] = {
	0xbc025800, 0x7fff4a, 0xcd810080, 0xffffab
};
#define MEM_ADDR 0x80200000
int main() {
	unsigned i;

    uint16_t len = 0x2000 ;
	for(i = 0; i < LENGTH(mem); i ++) {
		check((short)mem[i] == lh_ans[i]);
	}

	for(i = 0; i < LENGTH(mem); i ++) {
		check(mem[i] == lhu_ans[i]);
	}

	for(i = 0; i < ((LENGTH(mem) / 2) - 1); i ++) {
		unsigned x = ((unsigned*)((void*)mem + 1))[i];
		check(x == lwlr_ans[i]);
	}
	for(i = 0; i < LENGTH(mem); i ++) {
		mem[i] = ~(1 << (2 * i + 1));
		check(mem[i] == sh_ans[i]);
	}


    
	volatile  uint16_t *mem_data = (void *)(MEM_ADDR);
    for (int i = 0; i < len; ++i)
    {
         mem_data[i] = i;
    }
	putstr("mem tests prepared\n");

    for (int i = 0; i < len; ++i)
    {
        assert(mem_data[i] == i);
    }    
	volatile  uint16_t *mem_data6 = (void *)(0x80009000);
	volatile  uint16_t *mem_data5 = (void *)(0x80021000);
	volatile  uint16_t *mem_data4 = (void *)(0x80025000);
	volatile  uint16_t *mem_data2 = (void *)(0x80300000);
	volatile  uint16_t *mem_data3 = (void *)(0x84000000);
    for (int i = 0; i < len; ++i)
    {
         mem_data2[i] = i+2;
    }
	putstr("mem tests prepared\n");

    for (int i = 0; i < len; ++i)
    {
        assert(mem_data2[i] == (i+2));
    }
    for (int i = 0; i < len; ++i)
    {
        assert(mem_data[i] == i);
	}
    for (int i = 0; i < len; ++i)
    {
        assert(mem_data2[i] == (i+2));
	}

    for (int i = 0; i < len; ++i)
    {
         mem_data3[i] = i+3;
    }
    for (int i = 0; i < len; ++i)
    {
         mem_data4[i] = i+4;
    }
    for (int i = 0; i < len; ++i)
    {
         mem_data5[i] = i+5;
    }
    for (int i = 0; i < len; ++i)
    {
         mem_data6[i] = i+6;
    }
    for (int i = 0; i < len; ++i)
    {
        assert(mem_data3[i] == (i+3));
	}

    for (int i = 0; i < len; ++i)
    {
        assert(mem_data4[i] == (i+4));
	}
    for (int i = 0; i < len; ++i)
    {
        assert(mem_data5[i] == (i+5));
	}



	printf("test ok\n");
	return 0;
}
