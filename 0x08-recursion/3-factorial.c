#include <stdio.h>

/**
 * factorial - calculates the factorial of a number
 * @n: input number
 * Return: return an int
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
