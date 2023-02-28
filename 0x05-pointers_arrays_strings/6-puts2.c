#include <stdio.h>
#include "main.h"

/**
 * puts2 - function
 * @str: input
 */

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
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
