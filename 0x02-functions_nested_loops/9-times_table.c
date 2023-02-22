#include <stdio.h>
#include "main.h"

/**
 * times_table - multiples all numbers up to 9
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int prod;

	while (i < 10)
	{
		while (j < 10)
		{
			prod = i * j;
			if (prod < 10)
			{
				putchar(prod + '0');
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(prod / 10 + '0');
				putchar(prod % 10 + '0');
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}
