#include <stdio.h>

/**
 * main - Start
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 0;
	int numArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	while (i < 10)
	{
		putchar((char)numArr[i] + '0');
		if ( i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
