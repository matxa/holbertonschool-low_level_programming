#include "holberton.h"

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
