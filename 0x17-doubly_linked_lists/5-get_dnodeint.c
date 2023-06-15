#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *get_dnodeint_at_index - get node at index
  *@head: head pointer
  *@index: index
  *
  *Return: nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
