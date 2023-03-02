#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - works like strcmp
 * @s1: input 1
 * @s2: input 2
 * Return: int val
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	while (s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n])
	{
		n++;
	}
	return s1[n] - s2[n];
}
