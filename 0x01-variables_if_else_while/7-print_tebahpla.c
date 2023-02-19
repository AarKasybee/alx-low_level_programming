#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Should return 0 (success)
 */
int main(void)
{
	int i = 25;
	char arr[] = "abcdefghijklmnopqrstuvwxyz";

	while (i >= 0)
	{
		putchar(arr[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
