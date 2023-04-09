#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *print_binary - print binary
 *@n: number
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
unsigned int mask = 1 << 31;
unsigned int len;
for (len = 1; len <= 32; ++len)
{
putchar(n & mask ? '1' : '0');
n <<= 1;
}
}
