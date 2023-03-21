#ifndef DOG_H
#define DOG_H
/**
 *struct dog - create structure for dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 *Description: create a structure with name dog and parameters of the following
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
