#include "holberton.h"

/**
 * _puts_recursion - prints string
 *@s: char var p
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
