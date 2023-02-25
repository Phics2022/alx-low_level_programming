#include "main.h"
/**
 *print_diagonal - print a number of diagonal lines
 *@n: parameter
 *
 * Return: nvoid
 */
void print_diagonal(int n)
{
int y, z;
for (y = 0; y < n; y++)
{
for (z = 0; z < n; z++)
{
if (z == y)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
