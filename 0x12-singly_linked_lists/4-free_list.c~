#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_list - free list
 *@head: head
 *
 *Return: void
 */
void free_list(list_t *head)
{
list_t *current;
current = head;
while (current != NULL)
{
free(current->str);
free(current);
current = current->next;
}
}
