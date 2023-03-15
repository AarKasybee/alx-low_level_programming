#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - the function concatenates two strings.
 * @s1: string input 1
 * @s2: string input 2
 * Return: returns a new string
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int size1 = 0;
	int size2 = 0;
	int size_overall, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	size_overall = size1 + size2;
	newStr = (char *) malloc(sizeof(char) * (size_overall + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		newStr[i] = s1[i];
	}
	for (j = 0; j <= size2; j++)
	{
		newStr[i + j] = s2[j];
	}
	newStr[i + j] = '\0';
	return (newStr);
}
