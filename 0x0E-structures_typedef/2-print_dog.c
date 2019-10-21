#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * struc dog - info about dog
 * @d: pointer var
 *
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	if (d->name == NULL)
		printf("Name: %p\n", d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);
	if (d == NULL)
		printf(" ");
}
