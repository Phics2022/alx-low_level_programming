#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - add node at end
 *@head: head
 *@n: value
 *
 *Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp1 = *head;
listint_t *temp = malloc(sizeof(listint_t));
temp->next = NULL;
if (temp == NULL)
return (NULL);
if (*head == NULL)
{
*head = temp;
return (temp);
}
while (temp1->next != NULL)
{
temp1 = temp1->next;
}
temp->n = n;
temp1->next = temp;
return (temp);
}
