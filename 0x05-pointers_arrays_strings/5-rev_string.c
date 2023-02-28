#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string and stores it back
 * @s: input
 */
void rev_string(char *s)
{
	int i, j;
	char tempchar;
	int len = _strlen(s);

	for (i = len - 1, j = 0; i > j; i--, j++)
	{
		tempchar = s[i];
		s[i] = s[j];
		s[j] = tempchar;
	}
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
