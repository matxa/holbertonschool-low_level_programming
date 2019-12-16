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
	char *temp_p = s;
	unsigned int i = 0;

	for (; i != n; ++i)
	{
		temp_p[i] = b;
	}
	return (s);
}
