#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print 0-9
 *
 *
 */

void more_numbers(void)
{
	int num;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 == 0)
			{
				_putchar(num % 10 + '0');
			}
			else if (num / 10 != 0)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
		}
		printf("\n");
	}
}
