#include "main.h"
/**
 * append_text_to_file - append text at file end
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t check;
if (filename == NULL)
	return (-1);
if (text_content == NULL)
	return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
check = write(fd, text_content, strlen(text_content));
close(fd);
if (check == -1)
	return (-1);
return (1);
}
