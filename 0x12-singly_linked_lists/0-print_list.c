#include "lists.h"

/**
* print_list - prints all the elements of a list @h
* @h: the list the print
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{

size_t num_of_nodes = 0;

if (h->str == NULL)
{
printf("[0] (nil)");
}

while (h != NULL)
{
printf("[%d] %s", h->len, h->str);
h = h->next;
num_of_nodes += 1;
}
return (num_of_nodes);
}
