#include <stdio.h>

#include "g.h"
#include "s.h"

void
Sn (int n)
{
  int j = 0;
  for (int i = 0; i <= g (n); i++)
    {
      if (j > 19)
	{
	  printf ("\n                     | ");
	  j = 0;
	}
      printf ("%3d ", s (i));
      j++;
    }
  printf ("\n");
}
