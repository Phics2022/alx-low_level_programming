#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - print my name
 *@argc: counter
 *@argv: vector
 *
 *Return: void
 */
int main(int argc, char  *argv[])
{
int mul, n;
n = 1;
mul = 1;
if (argc == 3)
{
while (n < argc)
{
mul *= atoi(argv[n]);
n++;
}
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
