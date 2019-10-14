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
	char digit[] = "0123456789";
	int sum;
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 0)
		{
			printf("0\n");
		}
		if (isdigit(argv[i]) != digit[i])
		{
			printf("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	return (0);
}
