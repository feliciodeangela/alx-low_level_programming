#include "dog.h"
/**
 * free_dog - Entry point.
 * Description: Free tha Dawgs!
 * @d: Dawg to free.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
