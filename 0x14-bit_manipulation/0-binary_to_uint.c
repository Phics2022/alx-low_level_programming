#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary to int
 * @b: pointer to 1 and 0
 *
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int bin = atoi(b);
unsigned int two = 1;
unsigned int result = 0;
unsigned int exten;
int i;
int len = strlen(b);
if (b == NULL)
return (0);
for (i = 0; i <len; i++)
{
	if (b[i] != '1' && b[i] != '0')
		return (0);
}
while (bin > 0)
{
exten = bin % 10;
result += (exten * two);
two *= 2;
bin /= 10;
b++;
}
return (result);
}
