#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: string
 * @needle: string
 * Return: returns a string
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;
	char *r;

	for (p = haystack; *p != '\0'; p++)
	{
		for (q = p, r = needle; *r != '\0' && *q == *r; q++, r++)
		{
			;
		}
		if (*r == '\0')
		{
			return p;
		}
	}
	return NULL;
}

