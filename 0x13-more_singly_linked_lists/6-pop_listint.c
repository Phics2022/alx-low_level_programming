#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - delete head node
 *@head: head node
 *
 *Return: head
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
listint_t *temp1 = *head;
if (temp == NULL)
return (0);
int value;
value = temp->n;
temp1 = temp1->next;
*head = temp1;
free(temp);
return (value);
}
