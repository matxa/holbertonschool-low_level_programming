#include "holberton.h"

/**
* main - implementing the cp command
* @argc: num of args
* @argv: the args
* Return: (0 Success)
*
*/

int main(int argc, char **argv)
{
	int fd1, fd2, count;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((count = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(fd2, buffer, count) != count)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_cp_func(fd1, fd2);
	return (0);
}

/**
* close_cp_func - function for closing fd
* @fd1: fd 1
* @fd2: fd 2
*
*/

void close_cp_func(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd2);
		exit(100);
	}
}
