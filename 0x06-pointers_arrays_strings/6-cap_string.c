#include "holberton.h"

/**
 * cap_string - uppercase first letter of string
 * @s: is a variables
 * Return: s
 *
 */

char *cap_string(char *s)
{

	int i = 0;
	int j;
	int len = 0;
	char p[] = " \t\n,;.!?\"(){}";

	while (s[len] != '\0')
	{
		len++;
	}
	for (len++; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((i == 0) || (s[i - 1] == p[j]))
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
			}
		}
	}
	return (s);
}
