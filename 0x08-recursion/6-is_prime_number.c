#include <stdio.h>
#include "main.h"

int is_prime_helper(int n, int divisor);
/**
 * is_prime_number - finds a prime number
 * @n: input number
 *
 * Return: returns 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if  (n == 2)
	{
		return (1);
	}
	return is_prime_helper(n, n-1);
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: the number to check
 * @divisor: the current divisor being tested
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	else 
	{
		return (is_prime_helper(n, divisor - 1));
	}
}
