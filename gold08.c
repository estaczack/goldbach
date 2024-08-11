#include <stdio.h>
#include <stdbool.h>

#include "divn.h"
#include "g.h"
#include "iseven.h"
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
		  printf ("\n\n===================================\n\n");
		  printf ("n = %3d", n);
		  DivN (n);
		  printf
		    ("\ng(n) = %3d\ns(g(n)) = %3d\ns(g(n-2)) = %3d\ns(g(n-4)) = %3d\n",
		     g (n), s (g (n)), s (g (n - 2)), s (g (n - 4)));
		  if (IsEven (g (n)))
		    {
		      showeven (n);
		    }
		  else
		    {
		      showodd (n);
		    }
		}
	    }
	}
    }
}
