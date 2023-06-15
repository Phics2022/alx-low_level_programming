#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add_dnodeint_end - add node at end
  *@head: head pointer
  *@n: data
  *
  *Return: node address
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *temp_h = *head;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	while (temp_h->next != NULL)
	{
		temp_h = temp_h->next;
	}
	temp_h->next = temp;
	temp->prev = temp_h;
	temp->next = NULL;
	return (temp);
}
