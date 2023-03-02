#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * Return: retuns a char val
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = _strlen(dest);
	size_t src_len = _strlen(src);
	char *dest_end = (char*) malloc(dest_len + src_len + 1);

	if (dest_end == NULL)
	{
		return NULL;
     	}
	strcpy(dest_end, dest);
	strcpy(dest_end + dest_len, src);

	return dest_end;
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
