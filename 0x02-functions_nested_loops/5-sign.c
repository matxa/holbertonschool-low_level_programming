#include "holberton.h"

/**
 * print_sign - checks if c is lowercase
 * @n: is a variables
 * Return: 1 if c is lower case
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
