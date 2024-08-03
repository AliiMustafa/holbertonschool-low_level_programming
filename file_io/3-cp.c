#include "main.h"
void print_error_and_exit(const char *message, int code);
void copy_file(const char *file_from, const char *file_to);

void print_error_and_exit(const char *message, int code)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

void copy_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to;
    ssize_t read_bytes, write_bytes;
    char buffer[1024];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        print_error_and_exit("Error: Can't read from file", 98);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        print_error_and_exit("Error: Can't write to file", 99);
    }

    while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes)
        {
            close(fd_from);
            close(fd_to);
            print_error_and_exit("Error: Can't write to file", 99);
        }
    }

    if (read_bytes == -1)
    {
        close(fd_from);
        close(fd_to);
        print_error_and_exit("Error: Can't read from file", 98);
    }

    if (close(fd_from) == -1)
    {
        print_error_and_exit("Error: Can't close fd", 100);
    }

    if (close(fd_to) == -1)
    {
        print_error_and_exit("Error: Can't close fd", 100);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_error_and_exit("Usage: cp file_from file_to", 97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}

