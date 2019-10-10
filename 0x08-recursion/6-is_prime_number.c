#include "holberton.h"

/**
 *is_prime_number - shows the pointer of the var
 *@n: var for p and init
 *Return: (length)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_its_prime(2, n));
}

/**
 *check_if_its_prime - shows the pointer of the var
 *@i: var int
 *@n: var int
 *Return: (length)
 */

int check_if_its_prime(int i, int n)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_if_its_prime(i + 1, n));
}
