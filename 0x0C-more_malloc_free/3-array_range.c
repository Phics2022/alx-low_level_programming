#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range -creatan array of integers
 *@min: smallest
 *@max: largest
 *
 *Return: Array
 */
int *array_range(int min, int max)
{
int *ptr;
int i, j;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
j = 0;
for (i = min; i <= max; i++)
ptr[j++] = i;
return (ptr);
}
