#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - reverse with recursion
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
