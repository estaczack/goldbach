#include <stdio.h>

#include "mmc.h"

void
main ()
{
  printf ("mmc(%d,%d) = %d\n", 2, 3, MMC (2, 3));
  printf ("mmc(%d,%d) = %d\n", 3, 5, MMC (3, 5));
  printf ("mmc(%d,%d) = %d\n", 2, 4, MMC (2, 4));
  printf ("mmc(%d,%d) = %d\n", 4, 8, MMC (4, 8));
  printf ("mmc(%d,%d) = %d\n", 95, 93, MMC (95, 93));
  printf ("mmc(%d,%d) = %d\n", 120, 35, MMC (120, 35));
  printf ("mmc(%d,%d) = %d\n", 19, 37, MMC (19, 37));
  printf ("mmc(%d,%d) = %d\n", 14, 2, MMC (14, 2));
  printf ("mmc(%d,%d) = %d\n", 97, 35, MMC (97, 35));
  printf ("mmc(%d,%d) = %d\n", 48, 47, MMC (48, 47));

}
