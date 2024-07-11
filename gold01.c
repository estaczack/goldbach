#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "geven.h"

int main(int argc, char *argv[])
{
    int gn = 0;
    bool ge = false;

    for (int n = 6; n < 100; n = n + 2)
    {
        gn = g(n);
        ge = geven(n);
        if (ge)
        {
            printf("%d => %d\n", n, gn);
        }
    }
}