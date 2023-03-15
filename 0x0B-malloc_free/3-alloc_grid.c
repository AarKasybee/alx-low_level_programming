#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - prints 2D
 * @width:input 1
 * @height: input 2
 * Return: returns an int
 */
int **alloc_grid(int width, int height)
{
	int i;

	int **array = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
	}
	return (array);
}

