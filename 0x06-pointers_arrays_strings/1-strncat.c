#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: str1
 * @srd: srt2
 * @n: int
 * Return: returns a char
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = _strlen(dest);
	size_t src_len = strnlen(src, n);
	char* new_dest = malloc(dest_len + src_len + 1);

	if (new_dest == NULL)
		return (NULL);
	memcpy(new_dest, dest, dest_len);
	memcpy(new_dest + dest_len, src, src_len);
	new_dest[dest_len + src_len] = '\0';
	strcpy(dest, new_dest);
	free(new_dest);
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
