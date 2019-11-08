#include "holberton.h"

/*
* print_binary - convert num to binary
* @n: unsigned long int
* Return: converted number
*/

void print_binary(unsigned long int n)
{
	unsigned long int range = 2147483648;

	while (range > 0)
	{
		if ((range & n) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		range = range >> 1;
	}
}
