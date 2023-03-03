#include "main.h"
/**
 *_strncat - concatanates strings
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
