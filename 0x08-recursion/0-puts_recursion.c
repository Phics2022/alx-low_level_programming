#include "main.h"
/**
 *_puts_recursion - print a STRING RECURSIVELY
 *@s: string
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
unsigned int n;
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
