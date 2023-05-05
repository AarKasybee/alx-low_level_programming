#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: given decimal number
 * @index: index value
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if ((*n & (1 << index)))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
