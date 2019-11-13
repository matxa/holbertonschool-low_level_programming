#include "holberton.h"

/**
* main - implementing the cp command
* @argc: num of args
* @argv: the args
* Return: (0 Success)
*
*/

int main(int argc, char *argv[])
{
	int file_one, file_two, n;
	char buffer[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_one = open(argv[1], O_RDONLY, 0);
	if (file_one == (-1))
	{
		printf("can't open file %s", argv[1]);
	}
	file_two = open(argv[1], 0666);
	if (file_two == (-1))
	{
		printf("can't open file %s", argv[2]);
	}

	while ((n = read(file_one, buffer, 1024)) > 0)
	{
		if ((write(file_two, buffer, n)) != n)
			printf("write error on file %s", argv[2]);
	}

	return (0);
}
