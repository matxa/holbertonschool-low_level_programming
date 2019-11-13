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
	int fd_read; /* file descriptor */
	char *buffer; /* buffer reading to, and writting from */
	ssize_t read_count; /* sets = read() - keep count of read*/
	ssize_t write_count; /* sets = write() - keep count of write*/

	if (filename == NULL) /* check if file is null */
		return (0);

	buffer = malloc(sizeof(char) * letters); /* allocating memory for buffer */

	fd_read = open(filename, O_RDONLY); /* open takes a filename and O_FLAGS */
	if (fd_read == -1) /* if an error occoured */
		return (0);

	/* the number of bytes read is returned */
	read_count = read(fd_read, buffer, letters);
	if (read_count == -1) /* On error, -1 is returned */
		return (0);

	/* gets whats in buffer and outputs to the screen */
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1) /* On error, -1 is returned */
		return (0);

	close(fd_read); /* close the open file */

	free(buffer); /* free buffer */

	/* return the amount of chars pritned to stdout_fileno */
	return (write_count);
}
