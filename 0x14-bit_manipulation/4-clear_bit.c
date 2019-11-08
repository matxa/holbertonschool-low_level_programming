#include "holberton.h"

/**
* clear_bit - clear bit
* @n: num
* @index: index
* Return: cleared
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}