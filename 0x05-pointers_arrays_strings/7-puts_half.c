#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half the string
 * @str: input
 */

void puts_half(char *str)
{
	int i = 0;
	int length_of_the_string = _strlen(str);
	int n = (length_of_the_string - 1) / 2;

	while (i <= _strlen(str))
	{
		if (str[i] == '\0')
		{
			break;
		}
		if (_strlen(str) % 2 != 0)
		{
			if (i > n)
			{
				if (str[i] != '\0')
				{
					putchar(str[i]);
				}
			}
		}
		else if (i >= _strlen(str) / 2)
		{
			if (str[i] != '\0')
			{
				putchar(str[i]);
			}
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
