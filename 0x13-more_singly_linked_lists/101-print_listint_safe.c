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
* print_listint_safe - prints a listint_t list
* @head: the start node
* Return: number of node in the list, otherwise exit with code 98
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0, nodes = loop_once(head);
if (nodes == 0)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}
}
else
{
while (count < nodes)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (count);
}
