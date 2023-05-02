#include "lists.h"

/**
* free_listint2 - frees a listint_t list but set the @head to NULL.
* @head: the start node
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
{
return;
}
for (listint_t *current = *head; current != NULL; current = tmp)
{
tmp = current->next;
free(current);
}
*head = NULL;
}
