#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: passes character vlaue
 *
 * Return: returns 1if true, else returns 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
