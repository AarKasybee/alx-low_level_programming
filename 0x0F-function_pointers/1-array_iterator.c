#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_iterator - executes a function given as a paramete
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer to function in use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	array = (int *) malloc(size * sizeof(int));
	if (array == NULL)
	{
		exit(1);
	}
	i = (int) size;
	action(i);
}
