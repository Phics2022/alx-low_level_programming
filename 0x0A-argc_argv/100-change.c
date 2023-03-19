#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int change(int a);
/**
 *main - give amount of change
 *@argc: counter
 *@argv: change
 *
 *Return: amount of change
 */
int main(int argc, char *argv[])
{
if (argc > 2 || argc < 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
change(atoi(argv[1]));
return (0);
}
/**
 *change - give amount of change
 *@a: counter
 *
 *Return: amount of change
 */
int change(int a)
{
int i;
int *cashSet;
int *amt;
amt = malloc(sizeof(int) * 5);
cashSet = malloc(sizeof(int) * 5);
cashSet[0] = 25;
cashSet[1] = 10;
cashSet[2] = 5;
cashSet[3] = 2;
cashSet[4] = 1;
i = 0;
while (i < 5)
{
if (a >= cashSet[i])
{
amt[i] = a / cashSet[i];
a = a - (cashSet[i] * amt[i]);
}
else if (a < cashSet[i])
amt[i] = 0;
i++;
}
printf("%d\n", amt[0] + amt[2] + amt[3] + amt[1] + amt[4]);
return (0);
}

