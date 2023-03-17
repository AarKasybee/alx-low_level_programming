#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: num of elemnts
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
	{
		return (NULL);
	}
	memset(pointer, 0, nmemb * size);
	return (pointer);
}
