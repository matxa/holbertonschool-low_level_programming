#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - numbers
 * @n: var contains the value 98
 * Return: numbers from or to 98
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
