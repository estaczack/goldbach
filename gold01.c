#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "geven.h"
#include "showeven.h"
#include "showodd.h"

int
main (int argc, char *argv[])
{
  int gn = 0;
  bool ge = false;

  for (int n = 6; n < 60; n = n + 2)
    {
      gn = g (n);
      ge = geven (n);
      printf ("\n\n====================\n\n");
      if (ge)
	{
	  printf ("%d => %d (even)\n", n, gn);
	  showeven (n);
	}
      else
	{
	  printf ("%d => %d (odd)\n", n, gn);
	  showodd (n);
	}
    }
}
