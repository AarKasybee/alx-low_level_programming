#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

int convert(int c);
/**
 * cap_string - caps
 * @a: input char
 * Return: char output
 */
char *cap_string(char *a)
{
	int i = 0;
	char *result = malloc(strlen(a) + 1);

	while (a[i] != '\0')
	{
		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\t'
			|| a[i - 1] == '\n' || a[i - 1] == ','
			|| a[i - 1] == ';' || a[i - 1] == '.')
		{
			result[i] = convert(a[i]);
		}
		else if (a[i - 1] == '!' || a[i - 1] == '?' ||
			a[i - 1] == '"' || a[i - 1] == '(' ||
			a[i - 1] == ')' || a[i - 1] == '{' ||
			a[i - 1] == '}')
		{
			result[i] = convert(a[i]);
		}
		else
		{
			result[i] = a[i];
		}
		i++;
	}
	result[i] = '\0';
	strcpy(a, result);
	free(result);
	return (a);
}
/**
 * convert - converts from lower to upper
 * @c: input val
 * Return: int val
 */
int convert(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (c - 'a' + 'A');
	}
	else
		return (c);
}
