#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int convert(int c);

/**
 * string_toupper - func
 * @a: char input
 * Return: char val
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = convert(a[i]);
		i++;
	}
		return a;
}
/**
 * convert - converts from lower to upper
 * @c: input val
 * Return: int val
 */
int convert(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 'a' + 'A';
	}
	else
	{
		return c;
	}
}
