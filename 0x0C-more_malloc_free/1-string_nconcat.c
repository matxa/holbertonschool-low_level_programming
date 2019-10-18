#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concat str
 * @s1: 1st string
 * @s2: 2nd string
 * @n: n
 * Return: n
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = strnlen(s2, n);
	char *concat = malloc(strlen(s1) + strlen(s2));
	if (size != n)
	{
		memset(s1 + size, '\0', n - size);
	}
	concat = memcpy(s1, s2, size);
	return (concat);
}
