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
	int write_var;
	char c;

	if (filename == NULL)
	{
		return (-1);
	}

	fd_create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd_create == (-1))
	{
		return (-1);
	}

	while ((bytes = read(fd_create, &c, sizeof(c))) > 0)
	{
		write_var = write(fd_create, text_content, sizeof(c));
	}


	if (bytes == (-1))
		return (-1);

	if (write_var == (-1))
		return (-1);

	close(fd_create);
	return (1);
}
