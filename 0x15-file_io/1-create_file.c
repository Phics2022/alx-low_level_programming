#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t check;
if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (text_content == NULL)
	return (1);
check = write(fd, text_content, strlen(text_content));
close(fd);
if (check == -1)
	return (-1);
return (1);
}
