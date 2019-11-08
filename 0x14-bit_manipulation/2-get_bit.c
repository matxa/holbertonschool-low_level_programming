#include "holberton.h"

/**
* get_bit - gets bite at index
* @n: int
* @index: position
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);

	return (0);
}
