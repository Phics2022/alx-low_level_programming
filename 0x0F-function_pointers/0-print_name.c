#include "main.h"
#include <stdio.h>
/**
 *print_name - print a name
 *@name: name
 *@f: function pointer
 *
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
