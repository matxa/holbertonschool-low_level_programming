#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - duplicate str
 * @str: char array
 * Return: duplicated str
 *
 */

char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	void *dupli = malloc(len);

	if (dupli == NULL)
	{
		return (NULL);
	}
	return ((char *) _memcpy(dupli, str, len));
}

/**
 **_memcpy - function that fills memory with a constant byte
 *@dest: pointer
 *@src: char var
 *@n: int var
 *Return: (b)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp_p = dest;
	const char *s = src;

	while (n--)
		*temp_p++ = *s++;
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
