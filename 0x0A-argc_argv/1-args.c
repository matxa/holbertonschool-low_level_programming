#include <stdio.h>

/**
 *main - num of argumemnts
 *@argc: num of arg
 *@argv: the arg
 *Return: return num of args
 *
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
