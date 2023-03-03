#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print1s(int n);
void print10s(int n);
void print100s(int n);
void print1000s(int n);
void printnegs(int n);
/**
 * print_number - prints a num
 * @n: input
 */
void print_number(int n)
{
	if (n == 0)
	{
		putchar('0' + 0);
	}
	printnegs(n);
	print1s(n);
	print10s(n);
	print100s(n);
	print1000s(n);
}

void printnegs(int n)
{
	if (n < 0)
	{
		putchar('-');
		if (n < 0 && n >= 9)
		{
			putchar('0' + n);
		}
		else if (n >= 10 && n < 100)
		{
			int d = n / 10;
			int r = n % 10;

			putchar('0' + d);
			putchar('0' + r);
		}
	}
}

void print1s(int n)
{
	if (n >= 0 && n <= 9)
	{
		 putchar('0' + n);
	}
}

void print10s(int n)
{
	if (n >= 10 && n < 100)
	{
		int d = n / 10;
		int r = n % 10;
		
		putchar('0' + d);
		putchar('0' + r);
	}
}

void print100s(int n)
{
	if (n >= 100 && n < 1000)
	{
		int d = n / 100;
		int r1 = n % 100;
		int d2 = r1 / 10;
		int r2 = r1 % 10;

		putchar('0' + d);
		putchar('0' + d2);
		putchar('0' + r2);
	}
}

void print1000s(int n)
{
	 if (n >= 1000 && n < 10000)
	 {
		int d = n / 1000;
		int r1 = n % 1000;	
		putchar('0' + d);
		print100s(r1);
	 }
	
}
