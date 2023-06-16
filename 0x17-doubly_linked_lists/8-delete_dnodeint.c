#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *delete_dnodeint_at_index - delete node at index
  *@head: head pointer
  *@index: index
  *
  *Return: 1 or -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *temp2 = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp2->next;
		return (1);
	}
	while (i < index - 1)
	{
		if (temp2 == NULL)
			return (-1);
		temp2 = temp2->next;
		i++;
	}
	temp = temp2->next;
	temp = temp->next;
	temp2->next = temp;
	temp->prev = temp2;
	return (1);
}
