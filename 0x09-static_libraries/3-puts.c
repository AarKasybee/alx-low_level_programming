#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string to standard output
 * @str: input
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
