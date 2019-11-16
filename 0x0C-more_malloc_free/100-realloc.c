#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - realloc func
 * @ptr: void ptr
 * @old_size: old
 * @new_size: new
 * Return: void func
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int count;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/* malloc for new_ptr */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < old_size && count < new_size; count++)
	{
		new_ptr[count] = ((char *)ptr)[count];
	}
	free(ptr);
	return (new_ptr);
}
