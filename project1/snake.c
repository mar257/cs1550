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
  int color, i = 0;
  while(1){
    color = i%16;
    draw_pixel(current.x,current.y,color);
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
    ++i;
  }
}
