#include "holberton.h"

/**
 * print_triangle - prints #
 * @size: num of #
 * Return: lines (#)
 */

void print_triangle(int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
