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
unsigned int result = 0;
int i;
int len = strlen(b);
if (b == NULL)
return (0);
for (i = 0; i <len; i++)
{
	if (b[i] != '1' && b[i] != '0')
		return (0);
	result = (result << 1) | (b[i] - '0');
}
return (result);
}
