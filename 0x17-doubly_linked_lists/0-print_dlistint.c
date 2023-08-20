#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * doubly linked list
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	int size = 0;

	if (!head)
	{
		return (size);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (!head)
	{
		printf("%d\n", head->n);
		size++;
		head = head->next;
	}
	return (size);
}
