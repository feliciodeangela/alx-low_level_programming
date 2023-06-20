#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#ifndef dog
/**
 * struct dog - Represents a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
/**
 * dog_t - Entry point.
 * Description: Dog typedef.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
