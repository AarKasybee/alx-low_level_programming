#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: given number
 * @index: index position
 *
 * Return: success(1) if not (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((*n & (1 << index)) == 0)
	{
		*n |= (1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
