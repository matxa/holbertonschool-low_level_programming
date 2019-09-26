#include "holberton.h"

/**
 * print_line - prints lines
 * @n: num of lines
 * Return: lines ( __ )
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar(95);
		}
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
