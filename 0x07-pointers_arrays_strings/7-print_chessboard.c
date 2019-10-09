#include "holberton.h"
#include <stdio.h>

/**
 *print_chessboard - iterates through a 2d array using putchar;
 *@a: pointer
 *
 *Return: (s)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < *a[i]; i++)
	{
		for (j = 0; j < *a[j]; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
