#include <stdio.h>
#include<stdlib.h>

/**
 *main - multiply numbers
 *@argc: num of args
 *@argv: the args
 *Return: always return (0);
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int multi;

	multi = a * b;
	printf("%d\n", multi);
	return (0);
}
