#include "main.h"
/**
 *print_alphabet_x10 to putchar
 *_put char to cha
 *
 *Return: 0;
 */
/* using the newe func _putchar*/
void print_alphabet_x10(void)
{
char c;
int i;
/*using putchr*/
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
