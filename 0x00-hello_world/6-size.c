#include <stdio.h>

/**
 * main starts first
 *
 * next is return
 */
int main(void)
{
	char c = "Beet";
	int i = 10;
	long int li= 12;
	long long int lli= 3134;
	float f = 4.2;
	printf("Size of a char: ", sizeof(c));
	printf(" bytes\n");
	printf("Size of an int: ", sizeof(i));
	printf(" bytes\n");
	printf("Size of a long int: ", sizeof(li));
	printf(" bytes\n");
	printf("Size of a long long int: ", sizeof(lli));
	printf(" bytes\n");
	printf("Size of a float: ", sizeof(f));
	printf(" bytes"\n");
	return (0);
}
