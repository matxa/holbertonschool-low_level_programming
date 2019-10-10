#include "holberton.h"

/**
 * is_palindrome - prints string
 *@s: char var p
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	return (help(s, 0, len - 1));
}

/**
 * help - help func
 *@s: char var
 *@f: int var
 *@e: int var
 *Return: always
 */

int help(char *s, int f, int e)
{
	if (s[f] != s[e])
		return (0);
	if (f < e + 1)
		return (help(s, f + 1, e - 1));
	return (1);
}

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
