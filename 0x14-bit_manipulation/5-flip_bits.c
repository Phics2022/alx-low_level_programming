#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *flip_bits - flip bits calculatio
 *@n: number 1
 *@m: number 2
 *
 *Return: number of flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mask = n ^ m;
unsigned int counter = 0;
while (mask != 0)
{
counter += (mask & 1);
mask >>= 1;
}
return (counter);
}
