#include "main.h"
/**
 *print_most_numbers - print except 4 and 3
 *
 *Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <=9 ; i++)
{
_putchar(i + '0');
if (i == 1)
{
i++;
continue;
}
if (i == 3)
{
i++;
continue;
}
}
}
