#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all elemants
 *@h: pointer
 *
 *Return: nodes number
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t counter = 0;
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);
current = current->next;
counter++;
}
return (counter);
}
