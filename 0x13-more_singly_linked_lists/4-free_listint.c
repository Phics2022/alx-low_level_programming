#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - frees a list
 *@head: head
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp = head;
while (temp != NULL)
{
listint_t *next = temp->next;
free(temp);
temp = next;
}
}
