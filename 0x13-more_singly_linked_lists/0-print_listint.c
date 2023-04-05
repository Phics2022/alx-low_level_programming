#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - print all elements of a list
 *@h: head
 *
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
size_t count = 0;
while (temp != NULL)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}
