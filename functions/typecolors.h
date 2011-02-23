#ifndef __TYPECOLORS_H__
#define __TYPECOLORS_H__


#define G_IS_EVEN "\x1


#include "showodd.h"

int
main (int argc, char *argv[])
{
  int gn = 0;
  bool ge = false;
  int j = 0;

  for (int n = 6; n < 998; n = n + 2)
    {
      gn = g (n);
      ge = geven (n);

      if (ge)
	{
	  if (isprime (gn / 2))
	    {
	      printf ("\x1b[32m%d\x1b[0m\t", n);
	    }
	  else
	    {
	      printf ("\x1b[31m%d\x1b[0m\t", n);
	    }
	}
      else
	{
	  printf ("\x1b[36m%d\x1b[0m\t", n);
	}
      j = j + 1;
      if ((j % 16) == 0)
	{
	  printf ("\n");
	}
    }
  printf ("\n\n");
}
