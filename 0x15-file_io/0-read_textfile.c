#include "main.h"
/**
 * read_textfile - read a text file and print to stdout
 * @filename: file name
 * @letters: letters to print
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
size_t actual_num = 0;
ssize_t check;
char buff[1024];
if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
check = read(fd, buff, letters);
if (check == -1)
{
	close(fd);
	return (0);
}
while (buff[actual_num] != '\0' && actual_num < letters)
{
	actual_num++;
}
check = write(STDOUT_FILENO, buff, actual_num);
if (check == -1)
{
	close(fd);
	return (0);
}
close(fd);
return (actual_num);
}
