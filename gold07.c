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
      if (!isprime (s (g (n))))
	{
	  if (!isprime (s (g (n - 2))))
	    {
	      if (!isprime (s (g (n - 4))))
		{
		  printf
		    (" n = %3d\t%s%3d%s => ~G0\t%s%3d%s => ~G1\t%s%3d%s => ~G2\n", n,
		     IS_COMPOSITE_COLOR, s (g (n)), RESET_COLOR,
		     IS_COMPOSITE_COLOR, s (g (n - 2)), RESET_COLOR,
		     IS_COMPOSITE_COLOR, s (g (n - 4)), RESET_COLOR);
		}
	    }
	}
    }
}
