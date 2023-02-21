#include <stdio.h>
#include "main.h"

/**
 * main - prints the string _putchar
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 0;
	char arr[] = "_putchar";

	while (i < 8)
	{
		_putchar(arr[i]);
		i++;
	}
	_putchar('\n');	
	return (0);
}
