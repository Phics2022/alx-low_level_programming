#include "main.h"
/**
 *_strlen_recursion - get the lenght of a string recursively
 *@s: string
 *
 *Return: 0 if empty and return lenght
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return ((1) + _strlen_recursion(s + 1));
}
