#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - find index
 * @array: arr
 * @size: size
 * @cmp: func
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (0);
}
