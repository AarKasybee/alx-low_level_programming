#include <stdio.h>

/**
 * main - start
 *
 * Return: end
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			j++;
		}
		while(k < 10)
		{
			putchar(k + '0');
			putchar(m + '0');
			k++;
		}
		i++;
	}
	return (0);
	/* This is not done and is not correct yet*/
}

