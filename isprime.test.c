#include <stdio.h>
#include <stdbool.h>

#include "isprime.h"

void main()
{
    for (int i = 2; i < 100; i++) {
	if (isprime(i)) {
	    printf("\n%d is prime", i);
	}
    }
}
