#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "iseven.h"
#include "isprime.h"
#include "s.h"
#include "typecolors.h"

int
main (int argc, char *argv[])
{
  int j = 0;
  for (int n = 6; n < 502; n = n + 2)
    {
      printf ("%s%3d", RESET_COLOR, n);

      if (IsEven (g (n)))
	{
	  printf ("%s%4d", G_N_EVEN, g (n));
	}
      else
	{
	  printf ("%s%4d", G_N_ODD, g (n));
	}

      if (isprime (s (g (n))))
	{
	  printf ("%s%4d\t", S_G_N_PRIME, s (g (n)));
	}
      else
	{
	  printf ("%s%4d\t", S_G_N_COMPOSITE, s (g (n)));
	}
      j = j + 1;
      if ((j % 8) == 0)
	{
	  printf ("\n");
	}
    }
  printf ("\n\n");
}
