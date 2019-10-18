#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a ptr to 2d array of int
 * @width: pointer to a pointer
 * @height: height
 * Return: zero(0)
 */

int **alloc_grid(int width, int height)
{
	int **dynamic_arr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dynamic_arr = malloc(sizeof(int) * width + 1);

	if (dynamic_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		dynamic_arr[i] = malloc(sizeof(int) * height + 1);
	}
	return (dynamic_arr);
}
