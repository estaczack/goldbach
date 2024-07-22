#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "iseven.h"

int
main (int argc, char *argv[])
{

  printf ("\n\nE = (");
  for (int n = 6; n < 100; n = n + 2)
    {
      if (IsEven (g (n)))
	{
	  printf ("%d, ", n);
	}
    }
  printf ("...)\n\n");

  printf ("O = (");
  for (int n = 6; n < 100; n = n + 2)
    {
      if (!IsEven (g (n)))
	{
	  printf ("%d, ", n);
	}
    }
  printf ("...)\n\n");
}
