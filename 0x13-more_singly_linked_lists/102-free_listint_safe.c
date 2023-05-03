#include "lists.h"

/**
* loop_once - counts unique node list
* @head: start node
* Return: number of unique or 0 otherwise
*/
size_t loop_once(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 1;
if (head == NULL || head->next == NULL)
{
return (0);
}
slow = head->next;
fast = (head->next)->next;
for (; fast; slow = slow->next, fast = (fast->next)->next)
{
if (slow == fast)
{
slow = head;
for (; slow != fast; count++, slow = slow->next, fast = fast->next);
slow = slow->next;
for (; slow != fast; count++, slow = slow->next);
return (count);
}
}
return (0);
}




/**
* free_listint_safe - prints a listint_t list
* @head: the start node
* Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **head)
{
listint_t *tmp = NULL, *current = *head;
size_t nodes = loop_once(*head), index = 0;
if (nodes == 0)
{
while (head != NULL && *head != NULL)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
nodes++;
}
}
else
{
while (index < nodes)
{
tmp = current->next;
free(current);
current = tmp;
index++;
}
*head = NULL;
}
head = NULL;
return (nodes);
}
