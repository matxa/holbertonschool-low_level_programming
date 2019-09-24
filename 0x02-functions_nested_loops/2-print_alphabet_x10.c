#include "holberton.h"

/**
 * print_alphabet_x10 - prits the alphabet
 * Alphabet from a-z
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int times = 0;

	while (times < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		times++;
	}
}
