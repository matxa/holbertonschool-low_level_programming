#include "holberton.h"

/**
* flip_bits - flip two bits
* @n: first num
* @m: second num
* Return: (0)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n && m)
	{
		n ^= 1 << m;
		return (1);
	}
	return (-1);
}
