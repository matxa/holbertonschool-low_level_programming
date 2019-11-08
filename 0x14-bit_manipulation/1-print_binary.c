#include "holberton.h"

/*
* print_binary - convert num to binary
* @n: unsigned long int
* Return: converted number
*/

void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}
