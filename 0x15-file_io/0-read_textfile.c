#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - read and print a file
 * @filename: file name
 * @letters: range
 *
 * Return: range
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
char *buff = malloc(sizeof(char *) * letters);
ssize_t num_read;
ssize_t num_write;
if (filename == NULL)
{
	close(fd);
	free(buff);
	return (0);
}
if (fd == -1)
{
	free(buff);
	return (0);
}
num_read = read(fd, buff, letters);
if (num_read == -1)
{
	close(fd);
	free(buff);
	return (0);
}
num_write = write(STDOUT_FILENO, buff, num_read);
if (num_write == -1 || num_write != num_read)
{
	close(fd);
	free(buff);
	return (0);
}
close(fd);
free(buff);
return (num_read);
}
