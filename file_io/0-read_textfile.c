#include "main.h"

/**
 * read_textfile - function
 * @filename: pointer
 * @letters: variable
 * Return: 0 or number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t Read, Write;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(fd);
		return (0);
	}
	Read = read(fd, b, letters);
	close(fd);
	if (Read == -1)
	{
		free(b);
		return (0);
	}
	Write = write(STDOUT_FILENO, b, Read);
	free(b);
	if (Write == -1 || Write != Read)
	{
		return (0);
	}
	return (Write);
}
