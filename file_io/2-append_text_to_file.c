#include "main.h"

/**
 *  append_text_to_file - function
 *  @filename: pointer
 *  @text_content: pointer
 *  Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t Write;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	Write = write(fd, text_content, i);
	if (Write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
