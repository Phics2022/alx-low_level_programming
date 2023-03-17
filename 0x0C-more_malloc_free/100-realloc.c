#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - reallocate memory
 *@ptr: pointer
 *@old_size: old size
 *@new_size: new size
 *
 *Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
free(ptr);
return (new_ptr);
}
if (new_size > old_size)
{
new_ptr = malloc(new_size);
free(ptr);
return (new_ptr);
}
return (ptr);
}
