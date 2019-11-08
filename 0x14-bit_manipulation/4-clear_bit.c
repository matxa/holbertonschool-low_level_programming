#include "holberton.h"

/**
* clear_bit - clear bit
* @n: num
* @index: index
* Return: cleared
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = (1 << index);

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}
