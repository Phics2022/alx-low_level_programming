#include "main.h"
/**
 *_memset - fills memory with byte
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
int i, j;

for (i = 0; i < n; i++)
{
s[i] = b;
i++;
}
return (s);
}
