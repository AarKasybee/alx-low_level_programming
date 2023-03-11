#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @argc: number
 * @argv: char arr
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int prod;

	if (argc < 1)
	{
		exit(1);
	}

	if (argc - 1 == 2)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prod = n1 * n2;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
