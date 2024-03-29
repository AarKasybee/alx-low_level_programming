#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - make an array of integers
 * @min: minimum val
 * @max: maximum val
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
