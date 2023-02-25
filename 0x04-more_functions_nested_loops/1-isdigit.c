#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check 0 - 9
 *
 * @c: input
 *
 * Return: an int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
