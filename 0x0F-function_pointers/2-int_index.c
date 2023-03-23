#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search
 * @size: size pf array
 * @cmp: pointer to function that performs the comparison
 *
 * Return: returns the int value searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int num;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		exit(1);
	}
	while (i < size)
	{
		num = array[i];
		if (cmp(num) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
