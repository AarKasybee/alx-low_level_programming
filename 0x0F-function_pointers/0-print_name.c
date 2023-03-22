#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: pointer to a char
 * @f: void function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
