#include <stdio.h>
/**
 * _pow_recursion - power
 * @x: firsy num
 * @y: sec num
 *
 * Return: integer of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

