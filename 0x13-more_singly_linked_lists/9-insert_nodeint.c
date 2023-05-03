#include "lists.h"


/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: a pointer to a pointer to the start node
* @idx:  the index of the list where the new node should be added.
* @n: data to be added
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *t = *head;
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
if (!idx)
{
new->next = t;
return (*head = new, new);
}
while (--idx && t)
{
t = t->next;
}
if (!t)
{
return (free(new), NULL);
}
new->next = t->next;
return (t->next = new, new);
}
