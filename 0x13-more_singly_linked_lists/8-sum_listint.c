#include "lists.h"

/**
* sum_listint - sum all the data in a listint_t linkedlist
* @head: starting node
* Return: the total sum or 0 otherwise.
*/
int sum_listint(listint_t *head)
{
int sum_of_data = 0;

while (head)
{
sum_of_data += head->n;
head = head->next;
}
return (sum_of_data);
}
