#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate str
 * @str: string
 * Return: new_str
 *
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, n;

	for (n = 0; str[n] != '\0'; n++)
	{}
	new_str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (n + 1); i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}
