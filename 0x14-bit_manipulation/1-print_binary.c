#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int shifts = 0;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
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
			_putchar('1');
		}
		else if (started)
		{
			_putchar('0');
		}
		shifts--;
	}
}
