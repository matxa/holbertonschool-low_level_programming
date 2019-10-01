#include "holberton.h"

/**
 *puts_half - shows the pointer of the var
 *@str: string pointer
 *
 */

void puts_half(char *str)
{
	int length_of_the_string;
	int n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		while (length_of_the_string > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length_of_the_string + 1) / 2;
		while (length_of_the_string > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
