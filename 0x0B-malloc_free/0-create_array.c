#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates array
 * @size: size
 * @c: point char
 * Return: (0);
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
