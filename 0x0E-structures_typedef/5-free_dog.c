#include "dog.h"

/**
 * free_dog - function that frees memory allocated
 * @d: memory to be freed
 *
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
