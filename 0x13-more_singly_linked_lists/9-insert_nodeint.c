#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - insert node at index
 *@head: head
 *@idx: idex
 *@n: value
 *
 *Return:address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp1 = *head;
listint_t *temp = malloc(sizeof(listint_t));
unsigned int i = 0;
if (temp == NULL)
return (NULL);
temp->n = n;
if (idx == 0)
{
temp->next = *head;
*head = temp;
return (temp);
}
while (i < idx - 1)
{
if (temp1 == NULL)
return (NULL);
temp1 = temp1->next;
i++;
}
temp->next = temp1->next;
temp1->next = temp;
return (temp);
}
