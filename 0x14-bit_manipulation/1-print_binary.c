#include "holberton.h"

/**
* print_binary - a function that conver decimal to binary
* @n: unsigned long int
*
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	n = n & 1;
	_putchar(n + '0');
}
