#include "lists.h"

/**
* add_nodeint_end -  adds a new node at the end of a listint_t list.
* @head: stat node
* @n: data to add
* Return: address of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_list;
listint_t *temp_var = (*head);
new_list = malloc(sizeof(listint_t));
if (new_list == NULL)
{
return (NULL);
}
else
{
new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
(*head) = new_list;
return (new_list);
}
while (temp_var->next)
{
temp_var = temp_var->next;
}
temp_var->next = new_list;
return (new_list);
}
}
