#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatinate
 * @s1: 1st string
 * @s2: 2ns string
 * Return: concatination
 */

char *str_concat(char *s1, char *s2)
{
	char *concat = malloc(sizeof(s1) + sizeof(s2));

	if (s1 == NULL || s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}

	if (concat == NULL)
	{
		return (NULL);
	}
	_strcpy(concat, s1);
	_strcat(concat, s2);
	return (concat);
}

/**
 **_strcpy - copy
 *@dest: pointer
 *@src: pointer
 *Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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
