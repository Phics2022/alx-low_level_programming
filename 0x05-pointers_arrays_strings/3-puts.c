#include "main.h"
/**
 *_puts - print string to standad library
 *@str: parameter
 *
 *Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
}
