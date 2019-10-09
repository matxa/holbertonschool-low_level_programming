#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - iterates through a 2d array using putchar;
 *@a: pointer
 *@size: int var
 *Return: (s)
 */

void print_diagsums(int *a, int size)
{
	int i, val, sum_one, sum_two = 0;

	while (i < (size * size))
	{
		val = a[i];
		sum_one = sum_one + val;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		val = a[i];
		sum_two = sum_two + val;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum_one, sum_two);
}
