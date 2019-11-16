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

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(new_ptr);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(new_ptr);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	_memcpy(new_ptr, ptr, old_size);
	free(new_ptr);
	free(ptr);
	return (0);

}

/**
* _getmin - gets the minimum of two numbers
* @a: first num
* @b: second num
* Return: min
*/

int _getmin(unsigned int a, unsigned int b)
{
	return (a < b ? a : b);
}

/**
 **_memcpy - function that fills memory with a constant byte
 *@dest: pointer
 *@src: char var
 *@n: int var
 *Return: (b)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp_p = dest;
	const char *s = src;

	while (n--)
		*temp_p++ = *s++;
	return (dest);
}
