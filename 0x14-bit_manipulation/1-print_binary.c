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
int mask = 1UL << sizeof(unsigned long int);
while (mask > 0)
{
	if (mask & n)
		_putchar('1');
	else
		_putchar('0');
	mask >>= 1;
}
}
