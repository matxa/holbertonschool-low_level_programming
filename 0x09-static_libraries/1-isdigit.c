#include "holberton.h"

/**
 * _isdigit - checks if c is lowercase
 * @c: is a variables
 * Return: 1 if c is lower case
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
