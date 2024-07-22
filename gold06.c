#include <stdio.h>
#include <stdbool.h>

#include "divn.h"
#include "g.h"
#include "isprime.h"
#include "s.h"
#include "showeven.h"
#include "showodd.h"
#include "sn.h"
#include "typecolors2.h"

int
main (int argc, char *argv[])
{

  for (int n = 6; n < 1000; n = n + 2)
    {

      printf ("%s n = %3d\t=>\t", RESET_COLOR, n);

      if (isprime (s (g (n))))
	{
	  printf (" s(g(%3d)) = %s%3d%s\t=>\t G0\n", n, IS_PRIME_COLOR,
		  s (g (n)), RESET_COLOR);
	}
      else
	{
	  printf (" s(g(%3d)) = %s%3d%s\t=>\t~G0\n", n, IS_COMPOSITE_COLOR,
		  s (g (n)), RESET_COLOR);
	  if (isprime (s (g (n - 2))))
	    {
	      printf ("\t\t\t s(g(%3d)) = %s%3d%s\t=>\t G1\n", n - 2,
		      IS_PRIME_COLOR, s (g (n - 2)), RESET_COLOR);
	    }
	  else
	    {
	      printf ("\t\t\t s(g(%3d)) = %s%3d%s\t=>\t~G1\n", n - 2,
		      IS_COMPOSITE_COLOR, s (g (n - 2)), RESET_COLOR);
	      if (isprime (s (g (n - 4))))
		{
		  printf ("\t\t\t s(g(%3d)) = %s%3d%s\t=>\t G2\n", n - 4,
			  IS_PRIME_COLOR, s (g (n - 4)), RESET_COLOR);
		}
	      else
		{
		  printf ("\t\t\t s(g(%3d)) = %s%3d%s\t=>\t~G2\n", n - 4,
			  IS_COMPOSITE_COLOR, s (g (n - 4)), RESET_COLOR);
		}
	    }
	}
      printf ("\n");
    }
}
