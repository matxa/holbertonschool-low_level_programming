#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones, num;

	for (num = 0; num <= 99; num++)
	{
		tens = num % 10;
		ones = num / 10;
		if (ones < tens)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
