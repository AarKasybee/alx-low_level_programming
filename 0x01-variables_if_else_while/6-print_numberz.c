#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: reuturns 0 (success)
 */
int main(void)
{
	int i = 0;
	int numArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	while (i < 10)
	{
		putchar((char)numArr[i] + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
