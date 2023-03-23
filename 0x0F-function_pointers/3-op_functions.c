#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - additon
 * @a: num1
 * @b: num2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: num1
 * @b: num2
 *
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: num1
 * @b: num2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: num1
 * @b: num2
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: num1
 * @b: num2
 *
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
