.section entry, "ax"
.globl _start
.type _start, @function

_start:
	lui sp,0x80000
	addi sp ,sp,1000
  jal main
