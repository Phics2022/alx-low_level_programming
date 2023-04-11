#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at file end
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 and -1
 **/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t writer;
if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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
