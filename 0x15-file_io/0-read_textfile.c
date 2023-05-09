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
ssize_t actual_num = 0;
ssize_t check;
char buff[2000];
if (letters == 0)
	return (0);
if (filename == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
actual_num = read(fd, buff, letters);
if (actual_num == -1)
{
	close(fd);
	return (0);
}
check = write(STDOUT_FILENO, buff, actual_num);
close(fd);
if (check != actual_num)
	return (0);
if (check == -1)
	return (0);
return (actual_num);
}
