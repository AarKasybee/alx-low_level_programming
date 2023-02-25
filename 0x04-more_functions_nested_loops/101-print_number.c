#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_number - print
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = abs(n);
		putchar('-');
	} else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	putchar((i % 10) + '0');
}
