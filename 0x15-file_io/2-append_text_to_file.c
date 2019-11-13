#include "holberton.h"

/**
* append_text_to_file - append text to the end of a file.
* @filename: file name
* @text_content: text
* Return: (success)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_append;
	int bytes;
	char c;

	fd_append = open(filename, O_APPEND | O_CREAT | O_EXCL);

	if (fd_append == (-1) || filename == NULL)
	{
		return (-1);
	}

	if (fd_append < 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	while ((bytes = read(fd_append, &c, sizeof(c))) > 0)
	{
		write(fd_append, text_content, sizeof(c));
	}

	close(fd_append);
	return (1);
}
