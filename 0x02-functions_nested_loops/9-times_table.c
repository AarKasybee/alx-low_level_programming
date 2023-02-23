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
			if (j < 10)
			{
				if (prod < 10)
				{
					int next_prod = (i * (j+1));

					if ((next_prod) < 10)
					{
						if (j == 9)
						{
							putchar(prod + '0');
						}
						else
						{
							putchar(prod + '0');
							putchar(',');
							putchar(' ');
							putchar(' ');
						}
					}
					else
					{
						if (j == 9)
						{
							putchar(prod + '0');
						}
						else
						{
							putchar(prod + '0');
							putchar(',');
							putchar(' ');
						}
					}
				}
				else if (j == 9)
				{
					putchar(prod / 10 + '0');
					putchar(prod % 10 + '0');
				}
				else
				{
					putchar(prod / 10 + '0');
					putchar(prod % 10 + '0');
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		putchar('\n');
		i++;
		j = 0;
	}
}
