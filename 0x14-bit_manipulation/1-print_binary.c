#include "holberton.h"

/*
* print_binary - convert num to binary
* @n: unsigned long int
* Return: converted number
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
