#include "main.h"
/**
 *_putchar - print 10 times
 *print_alphabet
 *
 *Return: 0;
 */
void print_alphabet_x10(void)
{
  char c;
  int i;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
