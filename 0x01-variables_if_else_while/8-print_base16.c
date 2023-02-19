#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: returns 0
 */
int main(void)
{
	char arr[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(arr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
