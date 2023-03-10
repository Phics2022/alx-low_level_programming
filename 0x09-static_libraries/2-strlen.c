#include "main.h"
/**
 *_strlen - return lenght of string
 *@s: parameter
 *
 *Return: leanght of string
 */
int _strlen(char *s)
{
int y = 0;
while (*s != '\0')
{
y++;
s++;
}
return (y);
}
