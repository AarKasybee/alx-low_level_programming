#include <stdio.h>

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
		n = -n;
	}
	last_val = n % 10;
	putchar(last_val + '0');
	return (last_val);
}
