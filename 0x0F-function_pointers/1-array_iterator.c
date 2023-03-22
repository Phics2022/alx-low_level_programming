#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - executes a function given as a parameter
 *@array: array
 *@size: size of array
 *@action: function pointer
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (array == NULL)
return;
if (size <= 0)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
