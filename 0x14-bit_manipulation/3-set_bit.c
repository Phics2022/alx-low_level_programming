#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *set_bit - set value to 1
 *@n: number
 *@index: index
 *
 *Return: 1, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int len = sizeof(unsigned long int) * 8;
unsigned int mask = 1UL << index;
if (index >= len)
return (-1);
*n = *n | mask;
return (1);
}
