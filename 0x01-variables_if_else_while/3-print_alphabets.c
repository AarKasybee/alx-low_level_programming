#include <stdio.h>

/**
 * main - Start the program
 *
 * Return: returns a 0
 */
int main(void)
{
	char mixedAlpha[] = "abcdefghijklmnopqrstuvwxyz";
	char mixedAlpha2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index = 26;
	int i;

	for (i = 0; i < index; i++)
	{
		putchar(mixedAlpha[i]);
	}
	for (i = 0; i < index; i++)
	{
		putchar(mixedAlpha2[i]);
	}
	putchar('\n');
	return (0);
}
