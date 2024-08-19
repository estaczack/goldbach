#include <stdio.h>

#include "g.h"
#include "isprime.h"
#include "s.h"

void
DivN (int n)
{
  int j = 20;
  for (int i = 2; i <= n; i++)
    {
      if (j > 19)
	{
	  printf ("  |  ");
	  j = 0;
	}
      if (((n % i) == 0) && (isprime (i)))
	{
	  printf ("%3d ", i);
	  j++;
	}
    }
}
