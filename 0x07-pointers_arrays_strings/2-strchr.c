#include "holberton.h"

/**
 **_memset - function that fills memory with a constant byte
 *@s: pointer
 *@b: char var
 *@n: int var
 *Return: (b)
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
