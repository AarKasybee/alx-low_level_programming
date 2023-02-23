#include <stdio.h>
#include "main.h"

void formatting1(void);
void formatting2(void);

int i;
int j;
int prod;

/**
 * times_table - multiples all numbers up to 9
 */
void times_table(void)
{
	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			prod = i * j;
			if (prod < 10)
			{
				int next_prod = (i * (j + 1));

				if ((next_prod) < 10)
				{
					formatting1();
				}
				else
				{
					formatting2();
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
			j++;
		}
		putchar('\n');
		i++;
		j = 0;
	}
}
/**
 * formatting1 - deals with formatting
 */
void formatting1(void)
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
/**
 * formatting2 - deals with formatting
 */
void formatting2(void)
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
