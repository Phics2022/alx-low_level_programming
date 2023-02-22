#include "main.h"
/**
 *print_last_digit - print the last digit
 *@p: parameter
 *
 *Return: 0
 */
int print_last_digit(int p)
{
int k = p % 10;
if ( k < 0)
k = -k;
_putchar(k + '0');
return (k);
}
