#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - set bit to one at index
 * @n: number
 * @index: index
 *
 * Return: new bit or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index > sizeof(unsigned long int) * 8)
	return (-1);
*n = *n | mask;
return (-1);
}
