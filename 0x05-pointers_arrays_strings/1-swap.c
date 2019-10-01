#include "holberton.h"

/**
 *swap_int - shows the pointer of the var
 *@a: var for swap
 *@b: var for swap
 */

void swap_int(int *a, int *b)
{
	int temporary_a = *a;
	*a = *b;
	*b = temporary_a;
}
