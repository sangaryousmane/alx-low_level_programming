#include "lists.h"

/**
* free_listint2 - frees a listint_t list but set the @head to NULL.
* @head: the start node
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *t;
if ((*head) != NULL) 
for (; *head != NULL; t = (*head)->next)
{
free(*head);
*head = t;
}
head = NULL;
}
else
{
return;
}
}
