#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenate string
 *@s1: string 1
 *@s2: string 2
 *
 *Return: newS
 */
char *str_concat(char *s1, char *s2)
{
char *newS;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
int y, i, j;
j = 0;
y = 0;
for (i = 0; s2[i] || s1[i]; i++)
y++;
newS = malloc(sizeof(char) * y);
if (newS == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
{
newS[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
newS[j++] = s2[i];
}
return (newS);
}
