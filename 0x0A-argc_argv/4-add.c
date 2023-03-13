#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - print my name
 *@argc: counter
 *@argv: vector
 *
 *Return: void
 */
int main(int argc, char *argv[])
{
int i, sum;
sum = 0;
if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) >= 1 && atoi(argv[i]) <= 100000000)
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
