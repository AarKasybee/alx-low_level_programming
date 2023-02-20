#include <stdio.h>

/**
 *main - starts first
 *
 *Return: next is return
 */
int main(void)
{
	char c = 'B';
	int i = 10;
	long int li = 12;
	long long int lli = 3134;
	float f = 4.2;

	printf("Size of a char: %d", sizeof(c));
	printf(" byte(s)\n");
	printf("Size of an int: %d", sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %d", sizeof(li));
	printf(" byte(s)\n");
	printf("Size of a long long int: %d", sizeof(lli));
	printf(" byte(s)\n");
	printf("Size of a float: %d", sizeof(f));
	printf(" byte(s)\n");
	return (0);
}
