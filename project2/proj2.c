#include "types.h"
#include "user.h"
#include "pstat.h"

int main() {
  struct pstat pst;
  int i;
  settickets(2);

  getpinfo(&pst);
  printf(1, "Index\tInuse\tTickets\tPID\tTicks\n");
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
