#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *sum_dlistint - sum all elements
  *@head: head pointer
  *
  *Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
