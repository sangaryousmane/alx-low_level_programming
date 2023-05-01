#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: list
* Return: the size of the list
*/
size_t print_listint(const listint_t *h)
{
size_t num_of_nodes = 0;
for (; h != NULL; num_of_nodes++, h = h->next)
{
printf("%d\n", h->n);
}
return (num_of_nodes);
}
