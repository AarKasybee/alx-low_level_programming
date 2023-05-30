#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: given number
 * @index: index position
 *
 * Return: returns index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask;
	  unsigned long int bit;

	  if (index >= sizeof(unsigned long int) * 8)
	  {
		  return (-1);
	  }
	  mask = 1UL << index;
	  bit = (n & mask) >> index;
	  return ((int)bit);
}
