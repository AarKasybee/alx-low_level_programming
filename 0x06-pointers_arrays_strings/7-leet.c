#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into leet code
 *
 * @p: pointer to a character
 *
 * Return: returns a char val
 */

char *leet(char *p)
{
	int i = 0;
	int length = strlen(p);
	char *final;

	final = malloc(length + 1);
	memset(final, 0, length + 1);
	strcpy(final, p);
	while (p[i] != '\0')
	{
		if (p[i] == 'a' || p[i] == 'A')
			final[i] = ('0' + 4);
		else if (p[i] == 'e' || p[i] == 'E')
			final[i] =  ('0' + 3);
		else if (p[i] == 'o' || p[i] == 'O')
			final[i] = ('0' + 0);
		else if (p[i] == 't' || p[i] == 'T')
			final[i] = ('0' + 7);
		else if (p[i] == 'l' || p[i] == 'L')
			final[i] = ('0' + 1);
		else
			final[i] = p[i];
		i++;
	}
	strcpy(p, final);
	free(final);
	return (p);
}
