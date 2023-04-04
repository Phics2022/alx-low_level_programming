#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at index
 *@head: head
 *@index: index
 *
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp1 = *head;
listint_t *temp = malloc(sizeof(listint_t));
unsigned int i = 0;
if (*head == NULL)
{
free(temp1);
free(temp);
free(*head);
return (-1);
}
if (temp == NULL)
return (-1);
if (index == 0)
{
while (i < 1)
{
temp1 = temp1->next;
i++;
}
temp = *head;
*head = temp1;
free(temp);
return (1);
}
while (i < index - 1)
{
if (temp == NULL)
return (-1);
temp1 = temp1->next;
i++;
}
temp = temp1->next;
temp1->next = temp->next;
free(temp);
return (1);
}