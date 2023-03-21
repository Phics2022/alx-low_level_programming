#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - free a dog
 *@d: dog to be freed
 *
 *Return: Void
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}

