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
int = i, j;
j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n > strlen(s2)
n = strlen(s2);
s = malloc(strlen(s1) + n + 1);
if (s == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
s[j] = s1[i];
for (i = 0; i < n; i++)
s[j] = s2[i];
return (s);
}
