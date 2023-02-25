#include <stdio.h>
#include "main.h"

/**
 * more_numbers - more
 */
void more_numbers(void)
{
	int i;
	int j;

	while (j < 11)
	{	
		for (i = 0; i < 15; i++)
		{
			putchar('0' + i);
		}
		putchar('\n');
		i = 0;
		j++;
	}
}
