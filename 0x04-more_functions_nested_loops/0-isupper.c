#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks upper case
 * @c: input
 *
 * Return: an int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c);
	}
	else
		return (0);
}
