#include "lists.h"


/**
* find_listint_loop - finds a loop in a linkedlist
* @head: start of a loop
* Return: address of the where the loop starts, NULL otherwise.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
for (; slow != fast; slow = slow->next, fast = fast->next);
return (slow);
}
}
return (NULL);
}
