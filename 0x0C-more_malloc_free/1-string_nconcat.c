#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenate two strings
 *@s1: char 1
 *@s2: char 2
 *@n: number of bytes of s2
 *
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int i, j;
int x, y;
j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x]; x++)
;
for (y = 0; s2[y]; y++)
;
if (n > y)
n = y;
s = malloc(sizeof(char)* (x + n + 1));
if (s == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
s[j++] = s1[i];
for (i = 0; i < n; i++)
s[j++] = s2[i];
s[j + 1] = '\0';
return (s);
}
