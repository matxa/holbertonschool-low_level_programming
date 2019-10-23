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
	int i1, i2;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i1 = 0; name[i1] != '\0'; i1++)
		ptr->name[i1] = name[i1];
	for (i2 = 0; owner[i2] != '\0'; i2++)
		ptr->owner[i2] = owner[i2];
	ptr->age = age;
	return (ptr);
}


/**
 *_strlen - shows the pointer of the var
 *@s: var for p and init
 *Return: (length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
