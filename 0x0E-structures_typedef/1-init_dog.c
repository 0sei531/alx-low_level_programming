#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: initialized dog
 * @name: the dog's name
 * @age:  the dog's age
 * @owner: The owner of the dog.
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
