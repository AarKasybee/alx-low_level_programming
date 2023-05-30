#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	mask = 1UL << index;
	if (*n & mask)
	{
		*n &= ~mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
