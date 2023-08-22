#include "lists.h"

/**
* list_len - returns the number of elements in @h
* @h: structure that hold list
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
