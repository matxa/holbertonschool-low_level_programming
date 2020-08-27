#include "search_algos.h"

/**
 * jump_search - linear search function
 * @array: array to iterate
 * @size: size of the array
 * @value: value to seach for in the array
 * Return: index
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = sqrt(size);
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%u] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);

		if (end > size - 1)
			end = size;
	}

	printf("Value checked array[%u] = [%d]\n", start, array[start]);
	if (end == size)
	{
		end += sqrt(size);
		printf("Value found between indexes [%u] and [%u]\n", start, end - 1);
	}
	else
		printf("Value found between indexes [%u] and [%u]\n", start, end);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (i == (size - 1) && array[i] != value)
		{
			break;
		}
	}
	return (-1);
}
