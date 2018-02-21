#include "types.h"
#include "user.h"
#include "syscall.h"

#define start 320

typedef struct position{
  int x;
  int y;
}
int main(void)
{
  init_graphics();
  blit();
  struct position current = { .x=320, .y=320 };
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
