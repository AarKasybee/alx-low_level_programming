#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - gets the number of bits
 * @n: given number
 * @b: binary value
 *
 * Return: returns index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	unsigned int shifts = 0;
	unsigned int arr[64];
	int started = 0;
	unsigned int len = 0;

	while (temp > 0)
	{
		temp >>= 1;
		len++;
	}
	if (len > 64)
	{
		return (-1);
	}
	while (shifts < len)
	{
		if ((n >> shifts) & 1)
		{
			started = 1;
			arr[len - shifts - 1] = 1;
		}
		else if (started)
		{
			arr[len - shifts - 1] = 0;
		}
		shifts++;
	}
	if (index >= len)
	{
		return (-1);
	}
	return (arr[len - index - 1]);
}

