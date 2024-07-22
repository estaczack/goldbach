#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "gneven.h"
#include "isprime.h"
#include "s.h"
#include "showeven.h"
#include "showodd.h"
#include "typecolors.h"

int
main (int argc, char *argv[])
{
  int gn = 0;
  bool gne = false;
  int sgn = 0;
  int sgn2 = 0;
  int j = 0;

  for (int n = 6; n < 502; n = n + 2)
    {
      printf ("%s%3d", RESET_COLOR, n);

      gn = g (n);
      gne = gneven (n);
      sgn = s (gn);

      if (gne)
	{
	  sgn2 = s (gn / 2);
	}
      else
	{
	  sgn2 = 0;
	}

      if (gne)
	{
	  printf ("%s%4d", G_N_EVEN, gn);
	}
      else
	{
	  printf ("%s%4d", G_N_ODD, gn);
	}

      if (isprime (sgn))
	{
	  printf ("%s%4d\t", S_G_N_PRIME, sgn);
	}
      else
	{
	  printf ("%s%4d\t", S_G_N_COMPOSITE, sgn);
	}

      j = j + 1;
      if ((j % 8) == 0)
	{
	  printf ("\n");
	}
    }
  printf ("\n\n");
}
