#include "holberton.h"
#include <stdio.h>

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
		char *start = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
