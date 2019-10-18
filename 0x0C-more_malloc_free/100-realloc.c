#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - realloc func
 * @ptr: void ptr
 * @old_size: old
 * @new_size: new
 * Return: new_size
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		free(ptr);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);
		free(str);
                return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return NULL;
	}
	return (0);
}
