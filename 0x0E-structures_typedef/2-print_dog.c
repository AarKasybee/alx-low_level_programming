#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - prints the dog struct
 * @d: d is the the type dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
