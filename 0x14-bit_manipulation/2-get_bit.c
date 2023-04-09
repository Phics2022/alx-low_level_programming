#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *get_bit - get bit at index
 *@n: number
 *@index: index
 *
 *Return: index, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int len = sizeof(unsigned long int) * 8;
unsigned int mask = 1UL << index;
if (index >= len)
return (-1);
return ((n & mask) ? 1 : 0);
}
