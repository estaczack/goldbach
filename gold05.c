#include <stdio.h>
#include <stdbool.h>

#include "divn.h"
#include "g.h"
#include "isprime.h"
#include "s.h"
#include "sn.h"
#include "typecolors2.h"

int
main (int argc, char *argv[])
{
  printf
    ("======================================================================================================\n");
  printf (" n  | g(n) | s(g(n)) | Sn\n");
  printf ("    |      |         | Dg(n)\n");
  printf ("    |      |         | Dn\n");
  printf
    ("======================================================================================================\n");

  for (int n = 6; n < 702; n = n + 2)
    {
      if (!isprime (s (g (n))))
	{
	  printf ("%s%3d | ", RESET_COLOR, n);

	  if (isprime (g (n)))
	    {
	      printf ("%s%4d%s | ", IS_PRIME_COLOR, g (n), RESET_COLOR);
	    }
	  else
	    {
	      printf ("%s%4d%s | ", IS_COMPOSITE_COLOR, g (n), RESET_COLOR);
	    }

	  if (isprime (s (g (n))))
	    {
	      printf ("%s%7d%s | ", IS_PRIME_COLOR, s (g (n)), RESET_COLOR);
	    }
	  else
	    {
	      printf ("%s%7d%s | ", IS_COMPOSITE_COLOR, s (g (n)),
		      RESET_COLOR);
	    }
	  printf ("%s", RESET_COLOR);
	  Sn (n);
	  printf
	    ("------------------------------------------------------------------------------------------------------\n");
	  DivN (n);
	  printf
	    ("------------------------------------------------------------------------------------------------------\n");
	  DivN (s (g (n)));
	  printf
	    ("======================================================================================================\n");

	}
    }
  printf ("\n\n");
}
