#include "main.h"
/**
 *cap_string - cap each word
 *@c: parameter
 *
 *Return: c
 */
char *cap_string(char *c)
{
int i;
if (c[0] >= 'a' && c[0] <= 'z')
c[0] = c[0] - 32;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == ' ' || c[i] == '.' || c[i] == ',' || c[i] == ';')
if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] = c[i + 1] - 32;
if (c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(')
if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] = c[i + 1] - 32;
if (c[i] == ')' || c[i] == '{' || c[i] == '}' || c[i] == '\n')
if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] = c[i + 1] - 32;
}
return (c);
}
