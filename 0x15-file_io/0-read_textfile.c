#include "holberton.h"

/**
* read_textfile - read text file
* @filename: filename
* @letters: letters
* Return: ssize_t
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read;
	char buffer[sizeof(letters)];
	size_t bytes;
	char c;
	size_t i = 0;

	fd_read = open(filename, O_RDONLY);

	if (fd_read == (-1) || filename == NULL)
	{
		return (0);
	}

	while ((bytes = read(fd_read, &c, sizeof(c))) > 0)
	{
		write(fd_read, buffer, sizeof(char));
		if (i < letters)
		{
			i++;
			printf("%c", c);
		}
	}

	close(fd_read);
	return (i);
}
