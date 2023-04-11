#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - create a file with rw
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 and -1
 **/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t writer;
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (text_content == NULL)
{
	close(fd);
	return (1);
}
writer = write(fd, text_content, strlen(text_content));
if (writer == -1)
{
	close(fd);
	return (-1);
}
close(fd);
return (1);
}
