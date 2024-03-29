#include "dog.h"
/**
 * init_dog - Entry point.
 * Description: Initialize variable of type dog.
 * @d: Struct to work with.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
