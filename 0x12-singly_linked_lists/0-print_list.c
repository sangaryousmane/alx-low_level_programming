#include "lists.h"

/**
* print_list - prints all the elements of a list @h
* @h: the list the print
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{

h->len = strlen(h->str);


if (h->str == NULL)
{
printf("[0] (nil)");
}

while (h != NULL)
{
printf("[%d] %s", h->len, h->str);
h = h->next;
}
return (strlen(h));
}
