#include <stdio.h>

#include "mdc.h"


void
main ()
{
  printf ("mdc(%d,%d) = %d\n", 2, 3, MDC (2, 3));
  printf ("mdc(%d,%d) = %d\n", 3, 5, MDC (3, 5));
  printf ("mdc(%d,%d) = %d\n", 2, 4, MDC (2, 4));
  printf ("mdc(%d,%d) = %d\n", 4, 8, MDC (4, 8));
  printf ("mdc(%d,%d) = %d\n", 95, 93, MDC (95, 93));
  printf ("mdc(%d,%d) = %d\n", 120, 35, MDC (120, 35));
  printf ("mdc(%d,%d) = %d\n", 19, 37, MDC (19, 37));
  printf ("mdc(%d,%d) = %d\n", 14, 2, MDC (14, 2));
  printf ("mdc(%d,%d) = %d\n", 97, 35, MDC (97, 35));
  printf ("mdc(%d,%d) = %d\n", 48, 47, MDC (48, 47));

}
