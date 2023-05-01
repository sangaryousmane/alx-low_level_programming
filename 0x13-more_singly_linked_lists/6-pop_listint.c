#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t link lists.
* @head: start node
* Return: head node data or retun 0
*/
int pop_listint(listint_t **head)
{
int new_data = 0;
listint_t *temp_var = NULL;
if (*head == NULL)
{
return (0);
}
else
{
temp_var = *head;
new_data = temp_var->n;
*head = (*head)->next;
free(temp_var);
return (new_data);
}
}
