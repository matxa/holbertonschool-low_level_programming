#include <stdio.h>

/**
 *main - whats my name?
 *@argc: num of args
 *@argv: num of items
 *Return: return (argv[0])
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
