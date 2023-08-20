#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	first_head = *head;
	dlistint_t *first_head;
	dlistint_t *second_head;
	unsigned int i;

	if (first_head != NULL)
	{
		while (first_head->prev != NULL)
		{
			first_head = first_head->prev;
		}
	}
	i = 0;

	while (first_head != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = first_head->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second_first->next = first_head->next;
				if (first_head->next != NULL)
					first_head->next->prev = second_node;
			}
			free(first_head);
			return (1);
		}
		second_first = first_head;
		first_head = first_head->next;
		i++;
	}
	return (-1);
}
