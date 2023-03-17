#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - mltiply 
 *@argc: counter
 *@argv: vector
 *
 *Return: void
 */
int main(int argc, char *argv[])
{
if (argc == 1 || argc < 3 || argc > 3)
{
printf("Error\n");
exit(98);
}
if (!atoi(argv[1]) || !atoi(argv[2]))
{
printf("Error\n");
exit(98);
}
printf("%d\n", atoi(argv[1]) *atoi(argv[2]));
return (0);
}
