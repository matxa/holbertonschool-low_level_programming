#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - add positive numbers
 *@argc: num of args
 *@argv: the args
 *Return: always return (0);
 *
 */

int main(int argc, char **argv)
{
	int sum;
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 0)
		{
			printf("0\n");
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
