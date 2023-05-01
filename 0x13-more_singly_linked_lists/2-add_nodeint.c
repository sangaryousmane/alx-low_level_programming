#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: the initial node
* @n: data tobe added
* Return: the new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_list;
new_list = malloc(sizeof(listint_t));
if (new_list != NULL)
{
new_list->n = n;
new_list->next = (*head);
(*head) = new_list;
return (new_list);
}
return (NULL);
}
