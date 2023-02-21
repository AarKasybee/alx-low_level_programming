#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alphaArr[] = "abcdefghijklmnopqrstuvwxyz";
	char new_line = '\n';

	while (j < 10)
	{
		int i = 0;

		while (i < 26)
		{
			putchar(alphaArr[i]);
			i++;
		}
		putchar(new_line);
		j++;
	}
}
