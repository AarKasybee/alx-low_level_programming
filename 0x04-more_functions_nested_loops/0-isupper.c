#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks upper case
 * *@c: input
 *
 * Return: an int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c);
	}
	else
		return (0);
}
