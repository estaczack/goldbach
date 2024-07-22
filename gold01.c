#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "iseven.h"
#include "showeven.h"
#include "showodd.h"

int
main (int argc, char *argv[])
{
  int gn = 0;

  for (int n = 6; n < 500; n = n + 2)
    {
      printf ("\n\n====================\n\n");
      if (IsEven (g (n)))
	{
	  printf ("%d => %d (even)\n", n, g (n));
	  showeven (n);
	}
      else
	{
	  printf ("%d => %d (odd)\n", n, g (n));
	  showodd (n);
	}
    }
}
