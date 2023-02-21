#include <stdio.h>
#include "main.h"

/**
 * main - calls afunction
 *
 * Return: returns 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char alphaArr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char new_line = '\n';

	while (i < 26)
	{
		putchar(alphaArr[i]);
		i++;
	}
	putchar(new_line);
}

