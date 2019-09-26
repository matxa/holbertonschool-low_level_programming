#include "holberton.h"

/**
 * print_line - prints \ lines
 * @n: num of lines
 * Return: lines (\)
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 2; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
