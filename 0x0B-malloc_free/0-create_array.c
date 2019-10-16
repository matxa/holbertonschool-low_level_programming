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
	char *hold_c;

	if (size == 0)
	{
		return (NULL);
	}
	hold_c = malloc(sizeof(unsigned int) * size);
	if (hold_c == '\0')
	{
		return (hold_c);
	}
	for (i = 0; i < size; i++)
	{
		hold_c[i] = c;
	}
	return (hold_c);
}
