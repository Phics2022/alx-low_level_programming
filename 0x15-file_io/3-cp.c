#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
 * main - do the work
 * @argc: count
 * @argv: vector
 *
 * Return: erroe or 0
 **/
int main(int argc, char *argv[])
{
int fd = open(argv[1], O_RDONLY);
char *buff = malloc(1024);
ssize_t reader = read(fd, buff, 1024);
ssize_t writer;
ssize_t closer;
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
close(fd);
free(buff);
exit(97);
}
if (reader == -1 && fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd);
free(buff);
exit(98);
}
close(fd);
fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
writer = write(fd, buff, 1024);
if (fd == -1 && writer == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd);
exit(99);
}
closer = close(fd);
close(fd);
if (closer == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", fd);
exit(100);
}
free(buff);
return (0);
}
