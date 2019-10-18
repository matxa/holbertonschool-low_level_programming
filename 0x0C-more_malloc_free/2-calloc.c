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
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (temp);
}
