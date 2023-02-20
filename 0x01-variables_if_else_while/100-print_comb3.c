#include <stdio.h>

/**
 * main - start
 *
 * Return - success returns 0
 */
int main(void)
{
	int i;
	int j = 0;
	int numArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				putchar((char)numArr[i] + '0');
				putchar((char)numArr[j] + '0');
			}
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
