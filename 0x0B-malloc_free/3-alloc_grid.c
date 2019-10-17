#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - returns a ptr to 2d array of int
 * @width: pointer to a pointer
 * @height: height
 * Return: zero(0)
 */

int **alloc_grid(int width, int height)
{
	int **dynamic_arr;
	int num_rows = width;
	int num_cols = height;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dynamic_arr = malloc(sizeof(int) * num_rows + 1);

	for (i = 0; i < num_rows; i++)
	{
		dynamic_arr[i] = malloc(sizeof(int) * num_cols + 1);
	}
	return (dynamic_arr);
}
