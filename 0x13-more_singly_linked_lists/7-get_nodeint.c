#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - get node at index
 *@head: head
 *@index: index
 *
 *Return: value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int i = 0;
if (index == 0)
{
return (temp);
}
while (i < index)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
i++;
}
return (temp);
}
