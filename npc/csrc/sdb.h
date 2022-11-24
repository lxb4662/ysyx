
#include <cstdint>
static int cmd_w(char *args);
static int cmd_p(char *args);

static int cmd_d(char *args);
static int cmd_si(char *args);
static int cmd_x(char *args);
static int cmd_help(char *args);
static int cmd_q(char *args);
static int cmd_info(char *args);
void exec_end();
void exec();
void sdb_mainloop();
int exec_diff();
void exe_one();


void print_ref_reg ();

extern "C"
void difftest_exec(uint64_t n) ;

