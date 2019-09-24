#include "holberton.h"

/**
 * print_alphabet - prits the alphabet
 * Alphabet from a-z
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
