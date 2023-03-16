#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocate memory with malloc
 *@b: parameter
 *
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
