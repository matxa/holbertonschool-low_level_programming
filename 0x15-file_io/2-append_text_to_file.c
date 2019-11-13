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
	int write_len;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd_append = open(filename, O_WRONLY | O_APPEND);
	if (fd_append == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	write_len = write(fd_append, text_content, len);
	if (write_len == -1)
		return (-1);

	close(fd_append);
	return (1);
}
