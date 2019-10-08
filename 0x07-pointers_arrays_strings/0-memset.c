#include "holberton.h"

/**
 **_memset - function that fills memory with a constant byte
 *@s: pointer
 *@b: char var
 *@n: int var
 *Return: (b)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = (char *)s;
	unsigned int i = 0;

	for (; i != n; ++i)
	{
		p[i] = b;
	}
	return (s);
}
