#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: dstination
 * @src: source
 * @n: number of bytes
 * Return: returns a pointer to a char string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *destination = dest;
	char *source = src;

	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	dest = destination;
	return (dest);
}
