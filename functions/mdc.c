

#include "isprime.h"

int
MDC (int a, int b)
{
  int max = 0;
  int min = 0;
  int res = 0;
  if (a >= b)
    {
      max = a;
      min = b;
    }
  else
    {
      max = b;
      min = a;
    }
  while (min > 0)
    {
      res = max - min;
      if (res >= min)
	{
	  max = res;
	}
      else
	{
	  max = min;
	  min = res;
	}
    }
  return max;
}
