#include "holberton.h"

/**
 *print_rev - shows the pointer of the var
 *@s: var for p and init
 *Return: (reverse str)
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i--;
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
