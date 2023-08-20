#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a doubly list
 * @head: head of the list
 * @n: value of the element
 * Return: pointer to the new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	h = *head;
	new_node->next = h;

	if (h != NULL)
	{
		h->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
