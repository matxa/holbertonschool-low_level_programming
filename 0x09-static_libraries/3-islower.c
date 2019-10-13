#include "holberton.h"

/**
 * _islower - checks if c is lowercase
 * @c: is a variables
 * Return: 1 if c is lower case
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
