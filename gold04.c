#include <stdio.h>
#include <stdbool.h>

#include "divn.h"
#include "g.h"
#include "gneven.h"
#include "isprime.h"
#include "s.h"
#include "showeven.h"
#include "showodd.h"
#include "sn.h"
#include "typecolors2.h"

int
main (int argc, char *argv[])
{
  int gn = 0;
  bool gne = false;
  int sgn = 0;
  int sgn2 = 0;
  printf
    ("======================================================================================================\n");
  printf (" n  | g(n) | s(g(n)) | Sn\n");
  printf ("    |      |         | Dg(n)\n");
  printf ("    |      |         | Dn\n");
  printf
    ("======================================================================================================\n");

  for (int n = 6; n < 702; n = n + 2)
    {
      gn = g (n);
      gne = gneven (n);
      sgn = s (gn);

      if (!isprime (sgn))
	{
	  printf ("%s%3d | ", RESET_COLOR, n);

	  if (isprime (gn))
	    {
	      printf ("%s%4d%s | ", IS_PRIME_COLOR, gn, RESET_COLOR);
	    }
	  else
	    {
	      printf ("%s%4d%s | ", IS_COMPOSITE_COLOR, gn, RESET_COLOR);
	    }

	  if (isprime (sgn))
	    {
	      printf ("%s%7d%s | ", IS_PRIME_COLOR, sgn, RESET_COLOR);
	    }
	  else
	    {
	      printf ("%s%7d%s | ", IS_COMPOSITE_COLOR, sgn, RESET_COLOR);
	    }

	  printf ("%s", RESET_COLOR);
	  Sn (n);
	  printf
	    ("------------------------------------------------------------------------------------------------------\n");
	  DivN (n);
	  printf
	    ("------------------------------------------------------------------------------------------------------\n");
	  DivN (sgn);
	  printf
	    ("======================================================================================================\n");

	}
    }
  printf ("\n\n");
}
