#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at given index
* @n: num
* @index: index
* Return: (0)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return (*n |= 1 << index);
}
