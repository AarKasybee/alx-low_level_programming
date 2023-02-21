#include <stdio.h>

/**
 * _abs - prints abs value
 *
 * @n: input val
 *
 * Return: 1
 */
int _abs(int n)
{
	if (n >= 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = -1*n;
	}
	return (n);
}
