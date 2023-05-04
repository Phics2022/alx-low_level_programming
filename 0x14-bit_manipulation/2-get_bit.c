#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - get bit at an index
 * @n: number
 * @index: index
 * Return: value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index > sizeof(unsigned long int) * 8)
	return (-1);
return ((mask & n) ? 1 : 0);
}
