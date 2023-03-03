#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_digits(int n);
/**
 * print_number - prints a num
 * @n: input
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10000)
	{
		;
	}
	else
	{
		if (n == 0)
		{
			putchar('0' + 0);
		}
		if (n >= 1000)
		{
			print_digits(n / 1000);
			n %= 1000;
		}
		if (n >= 100)
		{
			print_digits(n / 100);
			n %= 100;
		}
		if (n >= 10)
		{
			print_digits(n / 10);
			n %= 10;
		}
		print_digits(n);
	}
	putchar('\n');
}
/**
 * print_digits - prints a num
 * @n: input
 */
void print_digits(int n)
{
	putchar('0' + (n % 10));
}
