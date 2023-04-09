#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

#define MAX_ARRAY_SIZE 64
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
	int shifts = 0;
	int len = 64;
	int arr[len] = {0};
	int started = 0;

	while (temp > 0)
	{
		temp >>= 1;
		shifts++;
	}
	while (shifts >= 0)
	{
		if ((n >> shifts) & 1)
		{
			started = 1;
			arr[shifts] = 1;
		}
		else if (started)
		{
			arr[shifts] = 0;
		}
		shifts--;
	}
	if (index > 64)
	{
		return (-1);
	}
	return (arr[index]);
}
