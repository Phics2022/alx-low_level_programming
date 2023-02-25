#include "main.h"
/**
 *print_diagonal - print a number of diagonal lines
 *@n: parameter
 *
 * Return: nvoid
 */
void print_diagonal(int n)
{   
if (n >=1)
{
for(int y = 0; y < n; y++)
{
for(int z = 0; z < n; z++)
{
if(z == y)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}else
{
_putchar('\n');
}
}
