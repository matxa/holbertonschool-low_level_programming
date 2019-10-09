#include "holberton.h"

/**
 * _strspn - function that fills memory with a constant byte
 * @s: pointer
 * @accept: char var
 * Return: ()
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!(accept[j]))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
