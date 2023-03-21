#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * init_dog - god info
 * @dog: struct name
 * @name: dog's name
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
