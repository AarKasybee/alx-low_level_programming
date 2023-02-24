#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - give sign
 * @i: input
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positve\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
