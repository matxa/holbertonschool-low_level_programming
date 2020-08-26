#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: array to iterate
 * @size: size of the array
 * @value: value to seach for in the array
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
