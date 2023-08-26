#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * back-forward linked list
 * @head: the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int size = 0;

	if (!head)
	{
		return (size);
	}
	while (head != NULL)
	{
		size++;
		head = head->next;
	}
	return (size);
}
