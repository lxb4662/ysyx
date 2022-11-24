
extern "C"
void difftest_init(int port) ;
extern "C"
void  difftest_raise_intr(int64_t NO) ;
extern "C"
void difftest_memcpy(uint64_t addr, void *buf, unsigned long n, bool direction);
extern "C"
void difftest_regcpy(struct REG *dut, bool direction);

struct REG
{
   uint64_t gpr [32];
   uint64_t pc;
};