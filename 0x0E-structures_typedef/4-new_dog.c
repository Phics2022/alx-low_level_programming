#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - function that creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
new = malloc(sizeof(struct dog));
new->name = malloc(sizeof(char) * (strlen(name) + 1));
if (new->name == NULL)
{
free(new->name);
free(new);
return (NULL);
}

strcpy(new->name, name);

new->age = age;

new->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (new->owner == NULL)
{
free(new->owner);
free(new);
return (NULL);
}
strcpy(new->owner, owner);
if (new == NULL)
{
free(new->name);
free(new->owner);
free(new);
return (NULL);
}
return (new);
}
