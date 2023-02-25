#include "main.h"
/**
 *print_line - print n amount of line
 *@n: parameter
 *
 *Return: void
 */
void print_line(int n)
{
if (n >= 1)
{
int j, y;

y = n + 1;
for (j = 1; j < y; j++)
_putchar('_');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
