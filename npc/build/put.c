#include "put.h"

int put (char a){

	volatile char * uart_cont = (char *)0x81000004;
	volatile char * uart_ctr  = (char *)0x81000000;
    if(*(char *)uart_ctr){
        return 0;
    }
    else {
        *(char *)uart_cont = a;
        *(char *)uart_ctr  = 1;
        return 1;
    }
}
