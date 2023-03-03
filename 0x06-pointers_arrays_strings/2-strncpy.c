#include "main.h"
/**
 *_strncpy - copy n numbers of string
 *@dest: parameter
 *@src: para,meter
 *@n: parameter
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (j = 0; src[j] != '\0'; j++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while(i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
