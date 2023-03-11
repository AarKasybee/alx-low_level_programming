#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: number
 * @argv: char arr
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int nums = 0;
	int *keep = malloc(sizeof(int) * (argc - 1));
	int j;
	int sum = 0;
	char *endptr;

	if (argc < 2)
	{
		printf("0\n");
		exit(1);
	}
	while (i < argc)
	{
		nums = strtol(argv[i], &endptr, 10);
		if (*endptr == '\0')
		{
			if (nums > 0)
			{
				keep[i - 1] = nums;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	for (j = 0; j < (argc - 1); j++)
	{
		sum = sum + keep[j];
	}
	printf("%d\n", sum);
	return (0);
}
