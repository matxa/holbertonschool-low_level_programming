#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - func to make new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: (new_dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j;
	/* pointer - ptr */
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	/* char array name */
	name = malloc(sizeof(*name) * (strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* char array owner */
	if (ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* loop throught name array and owner array */
	for (i = 0; name[i] != '\0'; i++)
		ptr->name[i] = name[i];
	for (j = 0; owner[j] != '\0'; j++)
		ptr->owner[j] = owner[j];
	ptr->age = age;
	return (ptr);
}
