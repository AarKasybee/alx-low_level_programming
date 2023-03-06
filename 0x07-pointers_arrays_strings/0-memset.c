#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s:pointer to a char
 * @b: constant byte
 * @n: first number of bytes
 * Return: returns a char of the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *memblock = s;
	unsigned int i = 0;

	while (i < n)
	{
		memblock[i] = b;
		i++;
	}
	return (s);
}
