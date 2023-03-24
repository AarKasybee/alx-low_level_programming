#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: input int arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < (n); i++)
		{
			j = va_arg(args, int);
			printf("%u ", j);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
