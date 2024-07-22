#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "gneven.h"
#include "showeven.h"
#include "showodd.h"

int
main (int argc, char *argv[])
{
  int gn = 0;
  bool gne = false;

  for (int n = 6; n < 500; n = n + 2)
    {
      gn = g (n);
      gne = gneven (n);
      printf ("\n\n====================\n\n");
      if (gne)
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
