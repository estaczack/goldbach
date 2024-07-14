#include <stdio.h>

#include "g.h"
#include "s.h"
#include "isprime.h"

void showeven(int n)
{
    int gn = g(n);
    int gn2 = gn / 2;
    for (int i = 0; i <= gn2; i++)
    {
        printf("\ns(%2d) = %d\t|\ts(%2d) = %d", i, s(i), gn - i, s(gn - i));
        if (isprime(s(i)) && isprime(s(gn - i)))
        {
            printf(" *");
        }
    }
}