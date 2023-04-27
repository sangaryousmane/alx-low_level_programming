#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list
* @head: the head of the list
* @str: the string to be added
* Return: the new list, otherwise NULL
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_list;
unsigned int length = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
{
length += 1;
}

new_list = malloc(sizeof(list_t));

if (new_list)
{
new_list->str = strdup(str);
new_list->len = length;
new_list->next = (*head);
(*head) = new_list;
return (new_list);
}
else
{
return (NULL);
}
}
