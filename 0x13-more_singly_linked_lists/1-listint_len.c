#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *listint_len - returns the number of elements
 *@h: head
 *
 *Return: count
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
int count = 0;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}
