#include "dog.h"
/**
 * new_dog - Entry point.
 * @name: New dog owner.
 * @age: New dog age.
 * @owner: New dog owner.
 * Return: Newly created dog pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *old_name, *old_owner;
	dog_t *res;

	res = malloc(sizeof(*res));
	if (res == NULL)
	{
		return (NULL);
	}
	res->name = malloc(sizeof(*name));
	old_name = malloc(sizeof(*name));
	if (res->name == NULL)
	{
		free(res);
		return (NULL);
	}
	else
	{
		strcpy(res->name, name);
		strcpy(old_name, name);
	}
	res->owner = malloc(sizeof(*owner));
	old_owner = malloc(sizeof(*owner));
	if (res->owner == NULL)
	{
		free(res->name);
		free(res);
		return (NULL);
	}
	else
	{
		strcpy(res->owner, owner);
		strcpy(old_owner, owner);
	}
	res->age = age;
	return (res);
}
