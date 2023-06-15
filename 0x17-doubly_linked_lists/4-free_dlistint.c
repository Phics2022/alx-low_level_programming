#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_dlistint - free doubly linked list
  *@head: head pointer
  *
  *Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
