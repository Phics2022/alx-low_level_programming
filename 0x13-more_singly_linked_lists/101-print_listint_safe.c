#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint_safe - print listint safe
 *@head: head
 *
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp = head;
size_t count = 0;
if (temp == NULL)
exit(98);
while (temp != NULL)
{
printf("[%p] %d\n", (void*)temp, temp->n);
count++;
temp = temp->next;
}
return (count);
}
