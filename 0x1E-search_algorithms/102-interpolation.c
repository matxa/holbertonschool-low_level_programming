#include "search_algos.h"

/**
 * interpolation_search - linear search function
 * @array: array to iterate
 * @size: size of the array
 * @value: value to seach for in the array
 * Return: index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;
	size_t i;
	size_t addiv;

	if (array == NULL)
		return (-1);

	if (value > array[high])
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	if (array[pos] == value)
	{
		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	else
	{
		for (i = pos; i < high; i++)
		{
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
