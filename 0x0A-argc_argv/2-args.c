#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args
 * @argc: number
 * @argv: char arr
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
	{
		exit(1);
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
