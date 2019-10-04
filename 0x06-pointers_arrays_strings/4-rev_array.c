#include "holberton.h"

/**
 *reverse_array - shows the pointer of the var
 *@a: var for string
 *@n: int
 *Return: (void)
 */

void reverse_array(int *a, int n)
{
	int t_var;
	int i = 0;

	n = n - 1;

	while (i < n)
	{
		t_var = a[n];
		a[n] = a[i];
		a[i] = t_var;
		i++;
		n--;
	}
}
