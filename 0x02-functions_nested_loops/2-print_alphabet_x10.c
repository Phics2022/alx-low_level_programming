#include "main.h"
/*print the alphabet in 10 lines*/
/**
 *print_alphabet_x10 - to putchar
 *@void: return void
 *
 *Return: 0;
 */
/* using the newe func _putchar*/
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
