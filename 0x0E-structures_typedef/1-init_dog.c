#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initialize dog func
 * struct dog - info about dog
 * @d: dog type pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
