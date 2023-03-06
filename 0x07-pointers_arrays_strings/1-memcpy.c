#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n && src[n] != '\0'; j++)
{
dest[j] = src[j];
}
return (dest);
}
