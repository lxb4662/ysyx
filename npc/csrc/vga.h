
void init_screen() ;
void update_screen();

int vgtctl[2];
char gmem[300*400*4];
static uint8_t *sync = NULL;
static uint32_t *vgactl_port_base = NULL;
void vga_update_screen();

void kbd_update();
uint32_t key_dequeue();