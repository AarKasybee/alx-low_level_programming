#include <stdio.h>
#include "main.h"

int calc_sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates sqrt
 * @n: input
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (calc_sqrt(n, i));
}

/**
 * calc_sqrt - find the natural root
 * @n: input
 * @i: iterator
 *
 * Return: actual sqrt
 */
int calc_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_sqrt(n, i + 1));
}
