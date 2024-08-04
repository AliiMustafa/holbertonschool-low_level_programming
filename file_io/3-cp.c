#include "main.h"
/**
  * main - entry point
  * @ac: argument count
  * @av: array of argument tokens
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t rd_stat, wr_stat;
	unsigned int perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char *buffer;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (0);
	}
	rd_stat = read(fd_from, buffer, 1024);
	if (rd_stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	wr_stat = write(fd_to, buffer, rd_stat);
	free(buffer);
	if (wr_stat != rd_stat || wr_stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
