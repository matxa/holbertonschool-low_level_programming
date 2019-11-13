#include "holberton.h"

/**
* read_textfile - read text file
* @filename - filename
* @letters - letters
* Return: ssize_t
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if(fd == (-1) || filename == NULL)
	{
		return (0);
	}

	read(fd, buffer, letters);
	printf("%s", buffer);

	close(fd);
	return(letters);
}
