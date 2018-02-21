#include "types.h"
#include "user.h"
#include "syscall.h"


int main(void)
{
printf(1, "init_graphics: %d", init_graphics());
// printf(1, "exit_graphics: %d", exit_graphics());
// printf(1, "getkey: %d", getkey());

printf(1, "clear_screen %d", clear_screen());
for(int i=0; i<16; i++)
  draw_pixel(320,320+i,i);

printf(1, "blit: %d", blit());
sleep(100);
sleep(100);
sleep(100);
sleep(100);
clear_screen();
blit();

draw_line(100,200,500,200, 2);
// draw_line(500,400,100,400, 13);
// draw_line(600,200,600,500, 13);
blit();
sleep(500);

// printf(1, "draw_line: %d", draw_line(1,2,3,4,5));
printf(1, "Test");


exit();
}
