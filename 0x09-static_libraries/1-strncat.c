#include "holberton.h"

/**
 **_strncat - copy
 *@dest: pointer
 *@src: pointer
 *@n: int var
 *Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
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
