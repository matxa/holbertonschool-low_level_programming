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
	int write_len;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd_create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd_create == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	write_len = write(fd_create, text_content, len);
	if (write_len == -1)
		return (-1);

	close(fd_create);
	return (1);
}
