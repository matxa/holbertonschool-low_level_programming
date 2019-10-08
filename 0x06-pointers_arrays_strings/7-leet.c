#include "holberton.h"

/**
 * *leet - changes leeters to numbers
 * @s: is a string variable
 * Return: s
 *
 */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	int i = 0;

	while (s[i] != '\0')
	{
		int i_sec_loop = 0;

		while (letters[i_sec_loop] != '\0')
		{
			if (s[i] == letters[i_sec_loop])
				s[i] = numbers[i_sec_loop];
			i_sec_loop++;
		}
		i++;
	}
	return (s);
}
