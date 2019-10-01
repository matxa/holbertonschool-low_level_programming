#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints array sepearted by comma and space
 *@a: pointer
 *@n: int
 */

void print_array(int *a, int n)
{
	int i = 0;

	n = sizeof(*a);

	for (; i <= n; i++)
		printf(i ? ", %d" : "%d", a[i]);
	putchar('\n');
}
