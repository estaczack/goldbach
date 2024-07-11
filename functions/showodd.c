#include <stdio.h>

#include "g.h"
#include "s.h"

void showodd(int n)
{
    int gn = g(n);
    int gn2 = (gn - 1) / 2;
    for (int i = 0; i <= gn2; i++)
    {
        printf("\ns(%2d) = %d\t|\ts(%2d) = %d", i, s(i), gn - i, s(gn - i));
    }
}