#include "main.h"
/**
 *_puts_recursion - print a STRING RECURSIVELY
 *@s: string
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s =='\0')
return ;
_putchar (*s);
_puts_recursion(s + 1);
_putchar('\n');
}
