#include "types.h"
#include "user.h"
#include "syscall.h"

#define start 320

struct position{
  int x;
  int y;
};
int main(void)
{
  init_graphics();
  blit();
  struct position current = { .x=320, .y=320 };
  // int x,y;
  int color, i = 0,j;
  while(1) {
    i++;
    color = i%16; //change color!
    draw_pixel(current.x,current.y,color);
    blit();
    int key = getkey();
    printf(1, "%d", key);
    if(key!=-1) {

      // Key press logic
      if(key=='w') {
        for(j=0;j<8;j++) {  //fill 8 bits per key press makes the "game" a bit more "responsive"
          current.y = current.y-1;
          draw_pixel(current.x,current.y,color);
        }
      } else if(key=='a') {
        for(j=0;j<8;j++) {
          current.x = current.x-1;
          draw_pixel(current.x,current.y,color);
        }
      } else if(key=='s') {
        for(j=0;j<8;j++){
          current.y = current.y+1;
          draw_pixel(current.x,current.y,color);
        }
      } else if(key=='d') {
        for(j=0;j<8;j++){
          current.x = current.x+1;
          draw_pixel(current.x,current.y,color);
        }
      } else if(key=='q') {
        exit_graphics();
        exit();
      }
    }
    sleep(10);
  }
}
