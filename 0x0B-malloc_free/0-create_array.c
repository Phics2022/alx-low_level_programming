#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creat array
*@size: size needed
*@c: character
*
*Return: array
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size <= 0)
return (NULL);
if (array == NULL)
return (NULL);
array = (char *) malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}

