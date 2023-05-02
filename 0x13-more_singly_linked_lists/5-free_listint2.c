#include "lists.h"

/**
* free_listint2 - frees a listint_t list but set the @head to NULL.
* @head: the start node
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *t;
listint_t *start;
if (head != NULL)
{
for (start = *head; start != NULL; start = t)
{
t = start->next;
free(start);
}
head = NULL;
}
else
{
return;
}
}
