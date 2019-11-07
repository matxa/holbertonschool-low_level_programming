#include "holberton.h"

/**
* binary_to_uint - a function that converts binary to unsigned int
* @b: string pointer
* Return: return converted uint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int b_s = atoi(b);
	unsigned int b_uint = 0;
	unsigned int last_digit;
	unsigned int base = 1;
	unsigned int temp;
	unsigned int i = 0;

	if (b)
	{
		if (b[i] != 0 || b[i] != 1)
		{
			b = '\0';
		}
		i++;
	}

	temp = b_s;
	while (temp)
	{
		last_digit = temp % 10;
		temp = temp / 10;

		b_uint += last_digit * base;

		base = base * 2;
	}

	return (b_uint);
}
