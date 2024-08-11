#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "divn.h"
#include "g.h"
#include "iseven.h"
#include "s.h"
#include "showeven.h"
#include "showodd.h"

int
main (int argc, char *argv[])
{
  int n = atoi (argv[1]);

  printf ("n = %5d  ==>  ", n);
  DivN(n);
}
