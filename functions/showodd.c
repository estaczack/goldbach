#include <stdio.h>

#include "divn.h"
#include "g.h"
#include "s.h"
#include "isprime.h"

void
showodd (int n)
{
  int gn = g (n);
  int gn2 = (gn - 1) / 2;
  for (int i = 0; i <= gn2; i++)
    {
      printf ("\ns(%3d) = %3d\t|\ts(%3d) = %3d", i, s (i), gn - i, s (gn - i));
      if (isprime (s (i)) && isprime (s (gn - i)))
	{
	  printf (" * ");
	}
      else
	{
	  printf ("   ");
	}
      DivN (s (gn - i));
    }
}
