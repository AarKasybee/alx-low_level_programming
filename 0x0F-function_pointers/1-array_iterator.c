#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a paramete
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer to function in use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	int elem;

	array = (int *) malloc(size * sizeof(int));
	if (array == NULL || action == NULL)
	{
		exit(1);
	}
	while (i < size)
	{
		elem = array[i];
		action(elem);
		i++;
	}
}
