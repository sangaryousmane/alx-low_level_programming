#include "lists.h"

/**
* free_listint_safe - prints a listint_t list
* @head: the start node
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **head)
{
listint_t *tmp = NULL, *current = *head;
size_t nodes = loop_once(*head), index = 0;
if (nodes == 0)
{
while (head != NULL && *head != NULL)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
nodes++;
}
}
else
{
while (index < nodes)
{
tmp = current->next;
free(current);
current = tmp;
index++;
}
*head = NULL;
}
head = NULL;
return (nodes);
}
