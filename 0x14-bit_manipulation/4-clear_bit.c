#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - set bit to 0 at index
 * @n:  number
 * @index: index
 *
 * Return: New bit or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
if (index > sizeof(unsigned long int) * 8)
	return (-1);
*n = *n | mask;
*n = *n ^ mask;
return (1);
}
