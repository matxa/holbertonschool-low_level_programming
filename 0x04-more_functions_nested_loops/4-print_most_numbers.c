#include "holberton.h"

/**
 * print_most_numbers - print 0-9
 * Return: 0-9 but 2 and 4
 *
 */

void print_most_numbers(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
