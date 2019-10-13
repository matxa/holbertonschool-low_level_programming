#include "holberton.h"

/**
 *_strncpy - shows the pointer of the var
 *@dest: var for p
 *@src: p
 *@n: init
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
