#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node of a linked list
 * @head: the head
 * @index: the list index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	i = 0;

	while (head)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}
	return (head);
}
