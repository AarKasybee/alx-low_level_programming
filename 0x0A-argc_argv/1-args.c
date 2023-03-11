#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: indicates the number of arguments
 * @argv: points to the nth arguments
 *
 * Return: success is 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
