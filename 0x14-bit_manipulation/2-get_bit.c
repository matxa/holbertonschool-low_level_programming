#include "holberton.h"

/**
* get_bit - gets bite at index
* @n: int
* @index: position
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
