#include <stdio.h>

/**
 * print_sign - prints the polarity of a number
 *
 * @n: number to be checked
 *
 * Return: returns 1 if +ve, 0 if 0, -1 if -ve
 */
int print_sign(int n)
{
	if (n == 0)
	{
		putchar(48);
		putchar('\n');
		return (0);
	}
	else if (n > 0)
	{
		putchar(43);
		putchar('\n');
		return (1);
	}
	else
	{
		putchar(45);
		putchar('\n');
		return (-1);
	}
}
