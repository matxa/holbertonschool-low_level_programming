#include "holberton.h"

/**
 *_strlen_recursion - len
 *@s: string pointer
 *Return: (0)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
