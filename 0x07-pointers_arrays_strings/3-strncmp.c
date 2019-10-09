#include "holberton.h"

/**
 *_strncmp - shows the pointer of the var
 *@s2: var for p
 *@s1: p
 *@n: len
 *Return: equal
 */

int _strncmp(const char *s1, const char *s2, int n)
{
	char u1, u2;

	while (n-- > 0)
	{
		u1 = (char) *s1++;
		u2 = (char) *s2++;
		if (u1 != u2)
			return u1 - u2;
		if (u1 == '\0')
			return 0;
	}
	return 0;
}
