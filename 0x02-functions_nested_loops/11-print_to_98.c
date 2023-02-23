#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void comma_space_func(void);
int sub_interval(int n);
	
/**
 * print_to_98; - prints all natural numbers
 *
 * @n: inputt value
 */
void print_to_98(int n)
{
	int i = 0;
	
	if (n == 98)
	{
		putchar('0' + 98 / 10);
		putchar('0' + 98 % 10);
		putchar('\n');
	}
	else if (n <= 98 && n >= 0)
	{
		while (i < 98)
		{
			if (n > 9)
			{
				if (n == 98)
				{
					putchar('0' + n / 10);
					putchar('0' + n % 10);
				}
				else
				{
					putchar('0' + n / 10);
					putchar('0' + n % 10);
					comma_space_func();
				}
			}
			else
			{
				putchar('0' + n);
				comma_space_func();
			}
			i++;
			n++;
		}
		putchar('\n');
	}
	else if (n > 99)
	{
		while (n >= 100)
		{
			putchar('0' + n / 100);			/*112 / 100 = 1r12*//*1*/
			putchar('0' + (n % 100) / 10); 		/* r12/10 = 1r2 *//*1*/
			putchar('0' + ((n % 100) / 10) % 10);	/* r2*//*2*/
			comma_space_func();
			n--;
		}
		while (n >= 98)
		{
			if (n == 98)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
			}
			else
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				comma_space_func();
			}
			n--;
		}
		putchar('\n');
	}
	else if (n < 0)
	{
		while (n > -1000 && n <= -100)
		{
			putchar('-');
			putchar('0' + abs(n) / 100);
			putchar('0' + abs(n) % 100);
			comma_space_func();
			n++;
		}
		while (n <= -10 && n > -100)
		{
			putchar('-');
			putchar('0' + abs(n) / 10);
			putchar('0' + abs(n) % 10);
			comma_space_func();
			n++;
		}
		while (n >= -9 && n <= -1)
		{
			putchar('-');
			putchar('0' + abs(n));
			comma_space_func();
			n++;
		}
		while (n >= 0 && n <= 9)
		{
			putchar('0' + abs(n));
			comma_space_func();
			n++;
		}
		while (n > 9 && n <= 98)
		{
			if (n == 98)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
			}
			else
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				comma_space_func();
			}
			n++;
		}
		putchar('\n');
	}
}


/**
 * comma_space_func - comma and space
 */
void comma_space_func(void)
{
	putchar(',');
	putchar(' ');
}
/**
 * sub_interval - determones the interval of iteration
 */
int sub_interval(int n)
{
	return abs(n - 98 + 1);
}
