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
int n =(size / sizeof(array[0]) + 1);
int i;
for (i = 0; i <= n + 2; i++)
{
action(array[i]);
}
}
