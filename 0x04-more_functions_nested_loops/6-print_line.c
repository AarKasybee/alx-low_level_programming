#include <stdio.h>
#include "main.h"

/**
 * print_line - print
 * @n: input
 */
void print_line(int n)
{
	int i;
	for (i = 1; i < (n + 1); i++)
	{
		if (i <= 0)
			putchar('\n');
		else
			putchar('_');
	}
	putchar('\n');
}
