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
	unsigned int pos;
	unsigned int low = 0;
	unsigned int high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / \
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%u] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
