#include "holberton.h"

/**
 * print_line - prints \ lines
 * @n: num of lines
 * Return: lines (\)
 */

void print_diagonal(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar(92);
		}
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
