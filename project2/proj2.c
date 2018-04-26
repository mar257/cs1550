#include "types.h"
#include "user.h"
#include "pstat.h"

int main() {
  struct pstat pst;
  int i;

  printf(1, "# \tinuse \tntix \tticks \tpid \n");
  for (i=0; i<NPROC; i++) {
    printf(1, "%d\t%d\t%d\t%d\t%d\n", i,
    pst.inuse[i],
    pst.tickets[i],
    pst.ticks[i],
    pst.pid[i]
  );
}
exit();
}
