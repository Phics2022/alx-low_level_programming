#include "dog.h"
#include <stdio.h>
/**
 *init_dog - Write a function that initialize a variable of type struct dog
 *@d: pointer to structure
 *@name:dogNmae
 *@age: dogAge
 *@owner: owner name
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("OK\n");
return;
}
d->name  = name;
d->age =  age;
d->owner = owner;
}
