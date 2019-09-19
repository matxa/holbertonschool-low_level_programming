#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = toupper(x);
		putchar(x);
	}
	return (0);
}
