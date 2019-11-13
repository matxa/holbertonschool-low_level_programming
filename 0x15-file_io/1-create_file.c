#include "holberton.h"

/**
* create_file - function that creates a file
* @filename: filename
* @text_content: text to be added to the file being created
* Return: (0 success)
*/

int create_file(const char *filename, char *text_content)
{
	int fd_create;
	int bytes;
	char c;

	fd_create = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd_create == (-1) || filename == NULL)
	{
		return (-1);
	}

	while ((bytes = read(fd_create, &c, sizeof(c))) > 0)
	{
		write(fd_create, text_content, sizeof(c));
	}

	close(fd_create);
	return (1);
}
