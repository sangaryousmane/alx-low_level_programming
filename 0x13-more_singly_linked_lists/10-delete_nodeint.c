#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of a list
* @index:  index of the node that should be deleted. Index starts at 0
* @head: a pointer to a pointer of a start node
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int n = 0;
listint_t *list, *t = *head;
if (!t)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(t);
return (1);
}
for (n = 0; n < (index - 1); n++)
{
if (t->next == NULL)
{
return (-1);
}
t = t->next;
}
list = t->next;
t->next = list->next;
free(list);
return (1);
}
