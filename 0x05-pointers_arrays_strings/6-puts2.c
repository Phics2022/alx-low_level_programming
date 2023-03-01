#include "main.h"
/**
 *6-put2 - print two forward
 *@str: parameter
 *
 *Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i+= 2)
_putchar(str[i]);
_putchar('\n');
}
