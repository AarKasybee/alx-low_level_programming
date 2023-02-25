#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints last digit
 *
 * @n: input
 *
 * Return: returns an int
 */
int print_last_digit(int n)
{
	int last_val;

	if (n < 0)
	{
		n = abs(n);
	}
	if (n >= 0 && n < 10)
	{
		last_val = n;
	}
	else if (n >= 10 && n < 100)
	{
		last_val = n % 10;
	}
	else if (n >= 100 && n < 1000)
	{
		last_val = n % 100;
		last_val = last_val % 10;
	}
	else if (n >= 1000 && n < 9999)
	{
		last_val = n % 1000;
		last_val = last_val % 100;
		last_val = last_val % 10;
	}
	putchar(last_val + '0');
	return (last_val);
}
