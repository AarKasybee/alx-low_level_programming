#include <stdio.h>

/**
 * main - start
 *
 * Return: value 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = i + 2;
			while (k < 10)
			{
				if (j > i && k > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
