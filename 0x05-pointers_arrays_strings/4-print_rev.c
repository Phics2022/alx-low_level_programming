#include "main.h"
/**
 *print_rev - print script in reverse
 *@s: parameter
 *
 *Return: void
 */
void print_rev(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
;
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
