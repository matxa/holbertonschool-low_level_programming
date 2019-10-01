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

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
