#include <stdio.h>
#include<stdlib.h>

/**
 *main - multiply numbers
 *@argc: num of args
 *@argv: the args
 *Return: always return (0);
 *
 */

int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
	}
	printf("%d\n", (a * b));
	return (0);
}
