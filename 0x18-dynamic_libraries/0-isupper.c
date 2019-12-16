#include "holberton.h"

/**
 * _isupper - checks if c is lowercase
 * @c: is a variables
 * Return: 1 if c is lower case
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
