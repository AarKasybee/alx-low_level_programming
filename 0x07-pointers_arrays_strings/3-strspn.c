#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: intial string segment
 * @accept: bytes to be used
 * Return: returns an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	i = (unsigned int) i;
	return (i);
}
