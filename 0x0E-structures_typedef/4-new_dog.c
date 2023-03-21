#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - function that creates a new dog.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner
 *
 *Description: crates a new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newd;

newd = malloc(sizeof(struct dog));
if (newd == NULL)
return (NULL);

if (name == NULL)
{
free(newd);
return (NULL);
}
newd->name = malloc(sizeof(char) * (strlen(name) + 1));
if (newd->name == NULL)
return (NULL);
strcpy(newd->name, name);

newd->age = age;

if (owner == NULL)
{
free(newd->owner);
free(newd);
return (NULL);
}
newd->owner = malloc(sizeof(char) * strlen(owner) + 1));
if (newd->owner == NULL)
return (NULL);
strcpy(newd->owner, owner);

return (newd);
}
