#include "holberton.h"

/**
 * _sqrt_recursion - square root
 *@n: int var
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return ( _isroot(1, n));
}

/**
 * _isroot - checks if num is root
 *@i: int var
 *@n: int var
 * Return: Always 0.
 */

int _isroot(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return ( _isroot(i + 1, n));
}
