#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add node end
 *@head: head
 *@str: string
 *
 *Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return(NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
list_t *cur = *head;
while (cur->next != NULL)
{
cur = cur->next;
}
cur->next = new;
}
return (new);
}
