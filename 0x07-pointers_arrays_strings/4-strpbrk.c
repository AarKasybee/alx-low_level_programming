#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - compares two strings
 * @s: string 1
 * @accept: string 2
 * Return: returns a string
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	char *q;

	for (p = s; *p != '\0'; p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				return (char *)p;
			}
		}
	}
	return NULL;
}
