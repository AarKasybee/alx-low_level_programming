#include <stdio.h>

/**
 * main - start
 *
 * Return: success returns 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int numArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	while (i < 10)
	{
		while (j < 10)
		{
			if (j > i)
			{
				putchar((char)numArr[i] + '0');
				putchar((char)numArr[j] + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
