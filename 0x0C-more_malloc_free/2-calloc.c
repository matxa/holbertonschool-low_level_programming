#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate
 * @nmemb: var
 * @size: var
 * Return: arr
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if ((nmemb <= 0) || (size <= 0))
	{
		return (0);
	}
	arr = malloc(nmemb * size);
	if (arr == '\0')
	{
		return (0);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
