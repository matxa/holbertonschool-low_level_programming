#include "holberton.h"

/**
 * print_numbers - print 0-9
 * Return: 0-9
 *
 */

void print_numbers(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
