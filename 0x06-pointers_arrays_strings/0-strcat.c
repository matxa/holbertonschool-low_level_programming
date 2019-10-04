#include "holberton.h"

/**
 **_strcat - cat
 *@dest: pointer
 *@src: pointer
 *Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int srci = 0;
	int dest_len = _strlen(dest);

	while (src[srci] != '\0')
	{
		dest[dest_len + srci] = src[srci];
		srci++;
	}
		dest[dest_len + srci] = '\0';
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
