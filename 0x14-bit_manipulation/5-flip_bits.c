#include "holberton.h"

/**
* flip_bits - flip two bits
* @n: first num
* @m: second num
* Return: (0)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	unsigned long int index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			result++;
		}
		index >>= 1;
	}
	return (result);
}
