#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts bin to uint
 * @b: binary value
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int dec_val = 0, i = 0, remainder;
	int len = strlen(b);

	while (b[i] != '\0')
	{
		len--;
		remainder = b[i] - '0';
		dec_val += remainder * _pow(2, len);
		++i;
	}
	return (dec_val);
}

/**
 * _pow - power function
 * @base: base of number
 * @exponent: exponent val
 *
 * Return: result of the power
 */
double _pow(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent < 0)
	{
		base = 1.0 / base;
		exponent = -exponent;
	}
	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
