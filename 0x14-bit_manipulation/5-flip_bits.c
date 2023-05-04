#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits -calculate flipped bits
 * @n: first number
 * @m: second number
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = m ^ n;
unsigned int flipped = 0;
while (xor > 0)
{
	if ((xor & 1) == 1)
		flipped++;
	xor >>= 1;
}
return (flipped);
}
