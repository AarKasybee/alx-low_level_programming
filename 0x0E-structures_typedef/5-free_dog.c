#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory in the dog struct
 * @d: free d
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
