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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
