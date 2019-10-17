#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - checks
 * @b: int
 * Return: non
 *
 */

void *malloc_checked(unsigned int b)
{
	int temp = b;

	unsigned int *a = malloc(sizeof(unsigned int) * temp);
	if (a == NULL)
	{
		exit(98);
	}
	free(a);
	return (a);
}
