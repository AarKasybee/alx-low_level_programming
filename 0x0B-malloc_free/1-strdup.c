#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string input
 * Return: pointer to a newly allocated space in memory,
 */
char *_strdup(char *str)
{
	char *newStr;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	newStr = (char *) malloc((size + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);

}
