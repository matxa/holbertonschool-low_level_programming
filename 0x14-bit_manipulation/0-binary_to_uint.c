#include "holberton.h"

/**
* binary_to_uint - a function that converts binary to unsigned int
* @b: string pointer
* Return: return converted uint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == '\0')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	return (value);
}
