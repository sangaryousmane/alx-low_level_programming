#include "lists.h"


/**
* get_nodeint_at_index - find the nth node of a listint_t linked list.
* @head: start node
* @index: is the index of the node, starting at 0
* Return: the nth node in the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
while (n < index && head != NULL)
{
head = head->next;
n++;
}
return (head);
}
