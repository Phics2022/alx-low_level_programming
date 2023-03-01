#include "main.h"
/**
 *puts_half - print half of the string
 *@str: parameter
 *
 *Return: void
 */
void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
;
j = i / 2;
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
