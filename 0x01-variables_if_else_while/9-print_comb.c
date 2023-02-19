#include <stdio.h>

/**
 * main - Start
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((char)i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
