#include "holberton.h"

/**
 * rot13 -encodes a string into 1337
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = (s[i] + 13);
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && (s[i] + 13) <= 'Z'))
		{
			s[i] = (s[i] - 13);
		}
		i++;
	}
	return (s);
}
