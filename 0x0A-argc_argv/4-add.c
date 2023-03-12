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
int n, sum;
sum = 0;
if (argc == 1)
printf("0\n");
if (argc > 1)
{
for (n = 1; n < argc; n++)
{
if (atoi(argv[n]) >= 1 && atoi(argv[n]) <= 10000)
{
sum += atoi(argv[n]);
}
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
