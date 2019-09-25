#include "holberton.h"

/**
 * times_table - 9 times table
 *
 * Return: times table
 *
 */

void times_table(void)
{
	int hori, verti, total;

	for (verti = 0; verti <= 9; verti++)
	{
		for (hori = 0; hori <= 9; hori++)
		{
			total = hori * verti;
			if (total < 10)
			{
				if (hori != 0)
				{
					if (hori != 10)
					{
						_putchar(',');
					}
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(total % 10 + '0');
			}
			else if (total >= 10)
			{
				if (hori != 10)
				{
					_putchar(',');
				}
				_putchar(' ');
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
