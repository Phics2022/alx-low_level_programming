#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy to the back
 *@str: string
 *
 *Return: string
 */
char *_strdup(char *str)
{
char *newS;
if (str == NULL)
return (NULL);
newS = malloc(strlen(str) + 1);
if (newS == NULL)
return (NULL);
strcpy(newS, str);
return (newS);
}
