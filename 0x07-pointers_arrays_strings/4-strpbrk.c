#include "holberton.h"

/**
 **_strpbrk - function that fills memory with a constant byte
 * @s: pointer
 * @accept: char var
 * Return: ()
 */

char *_strpbrk(char *s, char *accept)
{
	const char *c = accept;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c)
			break;
		s++;
	}
	return ((char *) s);
}
