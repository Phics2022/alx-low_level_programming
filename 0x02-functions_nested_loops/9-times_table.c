#include "main.h"
/**
 *times_table - print time table
 *
 *return: 0
 */
void times_table(void)
{
int i, j;
int n;
for (i = 0; i < 13; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
_putchar('0' + n);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
