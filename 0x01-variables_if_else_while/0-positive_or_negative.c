#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n < 0)
	{
		printf("%d is a negative number\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
