#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - print binary form
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << sizeof(unsigned long int);
int one = 0;
while (mask <= n)
	mask <<= 1;
while (mask > 0)
{
	if (mask & n)
	{
		_putchar('1');
		one = 1;
	}
	else if (one)
		_putchar('0');
	mask >>= 1;
}
if (!one)
	_putchar ('0');
}
