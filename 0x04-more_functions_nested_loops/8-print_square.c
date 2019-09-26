#include "holberton.h"

/**
 * print_square - prints #
 * @size: num of #
 * Return: lines (#)
 */

void print_square(int size)
{
	int h, v;

	for (v = 1; v <= size; v++)
	{
		for (h = 1; h <= size; h++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
