#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *insert_dnodeint_at_index - insert node at index
  *@h: head pointer
  *@idx: index
  *@n: data
  *
  *Return: new node address
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *temp2 = *h;
	unsigned int i;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->prev = NULL;
		temp->next = *h;
		*h = temp;
		return (temp);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp2 == NULL)
			return (NULL);
		temp2 = temp2->next;
	}
	temp->next = temp2->next;
	temp->prev = temp2;
	temp2->next = temp;
	return (temp);
}
