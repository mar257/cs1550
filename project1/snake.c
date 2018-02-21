#include "graphics.h"
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
  while(1){
    draw_pixel(current.x,current.y,12);
    blit();
    int key = getkey();
    printf(1, "%d", key);
    if(key!=-1){
      if(key=='w'){
        current.y = current.y-1;
      } else if(key=='a'){
        current.x = current.x-1;
      } else if(key=='s'){
        current.y = current.y+1;
      } else if(key=='d'){
        current.x = current.x+1;
      } else if(key=='q'){
        exit();
      }
    }
    sleep(5);
  }
}
