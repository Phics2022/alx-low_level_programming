#include "main.h"
/**
 *print_square -print a square
 *@size: parameter
 *
 *Return: void
 */
void print_square(int size)
{
if (size > 0)
{
int j, y;
y = size + 1;
for (j = 1; j < y; j++)
{
for (size = 0; size < y; size++)
_putchar('#');
_putchar('\n);
}
}
else
{
_putchar('\n');
}
}
