#include <stdio.h>
#include "main.h"

/**
 * swap_int - function swaps values
 * @a: input 1
 * @b: imput 2
 */

void swap_int(int *a, int *b)
{
	int temp_val = *b;
	*b = *a;
	*a = temp_val;
}
