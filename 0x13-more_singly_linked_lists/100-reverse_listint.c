#include "lists.h"

/**
* reverse_listint - reverses a list
* @head: a double pointer to the list
* Return: the reversed version of the list
*
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *t, *tail, *current;
if (head == NULL || *head == NULL)
{
return (NULL);
}
tail = NULL;
for (current = *head; current != NULL; current = t)
{
t = current->next;
current->next = tail;
tail = current;
}
*head = tail;
return (*head);
}
