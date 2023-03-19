#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - give amount of change
 *@argc: counter
 *@argv: change
 *
 *Return: amount of change
 */
int main(int argc, char *argv[])
{
int *cashSet;
int *amt;
int i;
amt = malloc(sizeof(int) * 5);
cashSet = malloc(sizeof(int) * 5);
cashSet[0] = 25;
cashSet[1] = 10;
cashSet[2] = 5;
cashSet[3] = 2;
cashSet[4] = 1;
if (argc > 2 || argc < 2)
{
printf("Error");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
i = 0;
while (i < 5)
{   
if (atoi(argv[1]) >= cashSet[i])
{
amt[i] = atoi(argv[1]) / cashSet[i];
atoi(argv[1]) = atoi(argv[1]) - (cashSet[i] * amt[i]);
}
else
amt[i] = 0;
i++;	
}
printf("%d\n", amt[0] + amt[2] + amt[3] +amt[1] + amt[4]);
return 0;
}
