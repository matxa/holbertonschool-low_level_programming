#include "holberton.h"

/**
 *puts2 - shows the pointer of the var
 *@str: var for p and init
 *Return: (length)
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
		a++;
	}
	_putchar('\n');
}
