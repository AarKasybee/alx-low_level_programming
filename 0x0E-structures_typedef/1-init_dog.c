#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - dog info
 * @d: pointer to the dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
