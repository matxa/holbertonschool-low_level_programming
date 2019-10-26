#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: num of args
 * @argv: args
 * Return: result of num1 and num2.
 */

int main(int argc, char *argv[])
{
	int (*new)(int, int);
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	new = get_op_func(argv[2]);

	if (new == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[3]) == 0) && (*argv[2] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", new(num1, num2));
	return (0);
}
