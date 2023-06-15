#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_dlistint - print a doubly linked list
  *@h: head
  *
  *Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
