// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/lixinbao/ysyx-workbench/npc/vsrc/myip_full_v1_0_S00_AXI.v:1:33
    extern long long mem_read(long long a, int len);
    // DPI import at /home/lixinbao/ysyx-workbench/npc/vsrc/myip_full_v1_0_S00_AXI.v:3:29
    extern int mem_write(long long a, int len, long long data);
    // DPI import at /home/lixinbao/ysyx-workbench/npc/vsrc/if.v:1:30
    extern void mtrace(int pc, int addr, int a0, int a1, int len);
    // DPI import at /home/lixinbao/ysyx-workbench/npc/vsrc/top.v:1:30
    extern void status_cpy(int addr, int a1, int a0, int write, int pc, int incache, int valid);

#ifdef __cplusplus
}
#endif
