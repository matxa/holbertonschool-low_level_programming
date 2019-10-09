#include "holberton.h"

/**
 **_strstr - finds and return char
 *@haystack: pointer
 *@needle: int var
 *Return: (s)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (_strncmp(haystack, needle) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}


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

/**
 *_strlen - shows the pointer of the var
 *@s: var for p and init
 *Return: (length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
