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
