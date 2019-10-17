#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - checks
 * @b: int
 * Return: non
 *
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(sizeof(int) * b);
	if (b == 0)
	{
		exit(98);
	}
	return (a);
}
