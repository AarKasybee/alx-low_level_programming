#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: firs character
 * @s: point to a char string
 * Return: returns a
 */
char *_strchr(char *s, char c)
{
	size_t i = 0;
	size_t len = strlen(s);

	while (i < len)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
