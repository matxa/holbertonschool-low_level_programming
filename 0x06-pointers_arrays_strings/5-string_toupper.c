#include "holberton.h"

/**
 * *string_toupper - lower to upper
 * @s: is a variables
 * Return: string
 *
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}
