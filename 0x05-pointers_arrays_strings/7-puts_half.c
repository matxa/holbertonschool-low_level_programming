#include "holberton.h"

/**
 *puts_half - shows the pointer of the var
 *@str: string pointer
 *
 */

void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	_putchar('\n');
}
