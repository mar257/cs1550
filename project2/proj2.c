#include "types.h"
#include "user.h"
#include "pstat.h"

int main() {
  struct pstat pst;
  int i;
  settickets(10);
  if (fork() == 0) {
    settickets(20);
    settickets(2);
    while (1);
  } else if (fork() == 0) {
    settickets(30);
    settickets(3);
    while (1);
  } else {
    while (1);
  }

//   printf(1, "Index\tInuse\tTickets\tPID\tTicks\n");
//   for (i=0; i<NPROC; i++) {
//     printf(1, "%d\t%d\t%d\t%d\t%d\n", i,
//     pst.inuse[i],
//     pst.tickets[i],
//     pst.pid[i],
//     pst.ticks[i]
//   );
// }
exit();
}
