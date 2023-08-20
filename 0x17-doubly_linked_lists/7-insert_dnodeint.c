#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *head;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (!head->next)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_node);
}
