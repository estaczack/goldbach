#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "gneven.h"
#include "s.h"
#include "showeven.h"
#include "showodd.h"

int
main (int argc, char *argv[])
{
  int n = atoi (argv[1]);

  printf ("n = %3d\n", n);
  printf ("g(%d) = %3d\n", n, g (n));
  printf ("s(g(%d)) = %3d\n", n, s (g (n)));
  printf ("\n====================\n");
  if (gneven (n))
    {
      showeven (n);
    }
  else
    {
      showodd (n);
    }
}
