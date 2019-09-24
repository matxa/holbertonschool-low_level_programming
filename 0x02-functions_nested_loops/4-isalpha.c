#include "holberton.h"

/**
 * _isalpha - checks if c is lowercase or uppercase
 * @c: is a variables
 * Return: 1 if c is lower case
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
