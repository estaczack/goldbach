#include <stdio.h>
#include <stdbool.h>

#include "g.h"
#include "geven.h"
#include "showeven.h"
#include "showodd.h"

int main(int argc, char *argv[])
{
    int gn = 0;
    bool ge = false;

    printf("\n\nE = (");
    for (int n = 6; n < 100; n = n + 2) {
	gn = g(n);
	ge = geven(n);
	if (ge) {
	    printf("%d, ", n);
	}
    }
    printf("...)\n\n");

    printf("O = (");
    for (int n = 6; n < 100; n = n + 2) {
	gn = g(n);
	ge = geven(n);
	if (!ge) {
	    printf("%d, ", n);
	}
    }
    printf("...)\n\n");
}
