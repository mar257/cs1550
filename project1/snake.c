#include "types.h"
#include "user.h"
#include "syscall.h"

#define start 320
int main(void)
{
  init_graphics();
  draw_pixel(320,320,12);
  blit();
  // int x,y;
  while(1){
    int key = getkey();
    if(key!=-1){
      printf(1, "---- %d", key);

      if(key=='w'){
        printf(1, "w");
      } else if(key=='a'){
        printf(1, "a");

      } else if(key=='s'){
        printf(1, "s");

      } else if(key=='d'){
        printf(1, "d");

      }
    }
    sleep(25);
  }
}
