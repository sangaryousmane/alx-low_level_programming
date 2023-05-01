#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: the list
* Return: the list length
*/
size_t listint_len(const listint_t *h)
{
size_t num_el = 0;
for (; h != NULL; num_el += 1)
{
h = h->next;
}
return (num_el);
}
