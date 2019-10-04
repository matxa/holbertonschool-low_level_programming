#include "holberton.h"

/**
 * cap_string - uppercase first letter of string
 * @s: is a variables
 * Return: s
 *
 */

char *cap_string(char *s)
{

	int i = 1;
	int j;

	char *sep = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i - 1] == sep[j])
					s[i] -= 'a' - 'A';
			}
			j++;
		}
		i++;
	}
	return (s);
}
