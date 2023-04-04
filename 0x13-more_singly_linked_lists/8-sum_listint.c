#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_listint- sum of all data in nodes
 *@head: head
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int value_sumer = 0;
if (temp == NULL)
{
return (0);
}
while (temp != NULL)
{
value_sumer += temp->n;
temp = temp->next;
}
return (value_sumer);
}
