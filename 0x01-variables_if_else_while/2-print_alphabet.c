#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: reuturns 0 (success)
 */
int main(void)
{
	char alphaArr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char new_line = '\n';

	while (i < 26)
	{
		putchar(alphaArr[i]);
		i++;
	}
	putchar(new_line);
	return (0);
}
