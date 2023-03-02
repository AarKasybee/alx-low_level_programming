#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - coppies a specified number of characters ina string
 * @dest: str1
 * @src: ste2
 * @n: intger input
 * Return: returns the coppied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
