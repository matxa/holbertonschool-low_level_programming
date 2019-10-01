#include "holberton.h"

/**
 *puts2 - shows the pointer of the var
 *@str: var for p and init
 *Return: (length)
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
