#include "lists.h"

/**
* free_list - frees a list
* @head: the start node
* Return nothing
*/

void free_list(list_t *head)
{
list_t *t;
while (head)
{
t = head->next;
free(head->str);
head = t;
free(t);
}
}
