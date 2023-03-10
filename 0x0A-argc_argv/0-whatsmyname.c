#include <stdio.h>
#include <stdlib.h>

/**
 * main - sartingpoint
 * @argc: arguiment counter
 * @argv: string vector
 *
 * Return: 0 integer
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		exit(1);
	}
	printf("\"%s\".\n", argv[0]);
	return (0);
}
