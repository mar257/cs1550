#include "types.h"
#include "user.h"
#include "syscall.h"

#define start 320

struct {
  int x=320;
  int y=320;
} current;
int main(void)
{
  init_graphics();

  blit();
  // int x,y;
  while(1){
    draw_pixel(current.x,current.y,12);
    int key = getkey();
    printf(1, "%d", key);
    if(key!=-1){
      if(key=='w'){
        draw_pixel(current.x,current.y-1,12);
      } else if(key=='a'){
        draw_pixel(current.x-1,current.y,12);
      } else if(key=='s'){
        draw_pixel(current.x,current.y+1,12);
      } else if(key=='d'){
        draw_pixel(current.x+1,current.y,12);
      }
    }
    sleep(25);
  }
}
