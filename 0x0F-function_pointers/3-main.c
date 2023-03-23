#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- start prog
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		return (1);
	}
	if (num1 == 0 && argv[1][0] != '0')
	{
		return (1);
	}
	if (num2 == 0 && argv[2][0] != '0')
	{
		printf("Invalid argument: %s\n", argv[2]);
		return (1);
	}
	return (0);
}
