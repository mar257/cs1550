#include "types.h"
#include "user.h"
#include "pstat.h"

// Print out pstat object basically
int main() {
  printf(1, "Index\t Inuse\t Tickets\t PID\t Ticks \n");
  for (i=0; i<NPROC; i++) {
    printf(1, "%d\t%d\t%d\t%d\t%d\n", i,
    pst.inuse[i],
    pst.tickets[i],
    pst.pid[i],
    pst.ticks[i]
  );
}
exit();
}
