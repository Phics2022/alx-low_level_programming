#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *binary_to_uint - binary to int
 *@b: pointer
 *
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int pow_two = 1;
unsigned int value = 0;
const char *b_copy = b;
unsigned int a = atoi(b);
if (b == NULL)
return (0);
while (*b_copy)
{
if (*b_copy != '0' && *b_copy != '1')
return (0);
value += (a % 10) * pow_two;
a = a / 10;
pow_two *= 2;
b_copy++;
}
return (value);
}
