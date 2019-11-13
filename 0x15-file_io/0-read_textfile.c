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
	char *buffer;
	ssize_t read_count;
	ssize_t write_count;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd_read = open(filename, O_RDONLY);
	if (fd_read == -1)
		return (0);

	read_count = read(fd_read, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(1, buffer, read_count);
	if (write_count == -1)
		return (0);

	free(buffer);
	close(fd_read);
	return (write_count);
}
