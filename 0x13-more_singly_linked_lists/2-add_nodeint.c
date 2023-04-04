#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - adds a node at the list start
 *@head: head pointer
 *@n: value
 *
 *Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}