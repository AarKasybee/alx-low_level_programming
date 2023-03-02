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
	char* dest_end = dest + strlen(dest);

	while (*src != '\0')
	{
		*dest_end++ = *src++;
	}
	*dest_end = '\0';
	return dest;
}
