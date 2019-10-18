#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - checks
 * @b: int
 * Return: non
 *
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
