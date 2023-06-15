#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *dlistint_len - return the number of nodes
  *@h: head
  *
  *Return: the lenght
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
