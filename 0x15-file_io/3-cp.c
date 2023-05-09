#include "main.h"
void cw_err(int fd, char *av);
void open_err(int fd, char *av);
/**
 * main - copies a file to another
 * @ac: number
 * @av: pointer to args
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
int fd;
ssize_t check;
ssize_t w_check;
char *buff = malloc(sizeof(char *) * 6000);
if (ac != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
fd =  open(av[1], O_RDONLY);
open_err(fd, av[1]);
check = read(fd, buff, 4000);
if (check == -1)
	close(fd);
open_err(check, av[1]);
close(fd);
fd = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fd == -1)
	close(fd);
cw_err(fd, av[2]);
w_check = write(fd, buff, strlen(buff));
if (w_check == -1)
	close(fd);
cw_err(w_check, av[2]);
close(fd);
return (0);
}

/**
 * open_err - open error
 * @fd: des
 * @av: name
 *
 * Return: void
 */
void open_err(int fd, char *av)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
exit(98);
}
else
return;
}
/**
 * cw_err - creatw write erroe
 * @fd: des
 * @av: name
 *
 * Return: void
 */
void cw_err(int fd, char *av)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
exit(99);
}
else
return;
}
