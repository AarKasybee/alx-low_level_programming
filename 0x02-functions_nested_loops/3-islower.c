#include <stdio.h>
#include "main.h"

/**
 * _islower - checker for lower case input
 *
 * @c: the number to be checked
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
