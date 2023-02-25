#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print most
 */
void print_most_numbers(void)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
			putchar('0' + i);
	}
	putchar('\n');
}
