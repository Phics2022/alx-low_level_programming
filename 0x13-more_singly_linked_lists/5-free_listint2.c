#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - free list
 *@head: head
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp = *head;
if (temp == NULL)
{
free(temp);
*head = NULL;
return;
}
while (temp != NULL)
{
listint_t *next = temp->next;
free(temp);
temp = next;
}
*head = NULL;
}
