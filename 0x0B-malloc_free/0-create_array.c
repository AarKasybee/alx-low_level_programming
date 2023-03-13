#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * create_array - function to create an array of characters
 * @size: size of the array
 * @c: the input characters
 *
 * Return: returns an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char*ptr;
	unsigned int i;

	ptr = malloc((size + 1) * sizeof(char));
	if(ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while(i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
