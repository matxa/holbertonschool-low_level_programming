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

	if (!b)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] == '1')
		{
			value = (value << 1) | 1;
		}
		else if (b[i] == '0')
		{
			value = (value << 1);
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
