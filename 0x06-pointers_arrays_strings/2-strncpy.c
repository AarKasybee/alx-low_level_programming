#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - Function
 * @dest: str1
 * @src: ste2
 * @n: intger input
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
