#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: input char
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0 && s[0])
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: input char
 *
 * Return: string value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
