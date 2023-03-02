#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: str1
 * @srd: srt2
 * @n: int
 * Return: returns a char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: input char
 *
 * Return: string value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
