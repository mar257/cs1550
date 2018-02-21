#include "types.h"
#include "user.h"
#include "syscall.h"


int main(void)
{
printf(1, "init_graphics: %d", init_graphics());
printf(1, "exit_graphics: %d", exit_graphics());
printf(1, "getkey: %d", getkey());
printf(1, "clear_screen %d", clear_screen());
printf(1, "draw_pixel: %d", draw_pixel(1,2,3));
printf(1, "draw_line: %d", draw_line(1,2,3,4,5));
printf(1, "blit: %d", blit());
exit();
}
