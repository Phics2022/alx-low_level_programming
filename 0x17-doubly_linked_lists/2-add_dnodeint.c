#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *add_dnodeint - add node at beginning
  *@head: head pointer
  *@n: data
  *
  *Return: address of new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *temp_h = *head;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	temp->prev = NULL;
	temp->next = *head;
	temp_h->prev = temp;
	*head = temp;
	return (temp);
}
