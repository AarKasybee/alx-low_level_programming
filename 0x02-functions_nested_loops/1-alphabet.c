#include <stdio.h>
#include "main.h"
#include "_putchar.c"
#include "1-main.c"

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char alphaArr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char new_line = '\n';

	while (i < 26)
	{
		putchar(alphaArr[i]);
		i++;
	}
	putchar(new_line);
}
