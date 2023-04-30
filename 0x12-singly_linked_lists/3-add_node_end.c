#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the tail of a list
* @head: a double pointer to the head of the list
* @str: the string to be added
* Return: address of a new list or NULL if fail.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *my_new_list;
list_t *temporary = *head;
int counter = 0;
int i = 0;

for (; str[i] != '\0'; i++)
{
counter++;
}
my_new_list = malloc(sizeof(list_t));
if (my_new_list)
{
my_new_list->len = counter;
my_new_list->str = strdup(str);
my_new_list->next = NULL;
if (!*head)
{
*head = my_new_list;
return (my_new_list);
}
while (temporary->next)
{
temporary = temporary->next;
}
temporary->next = my_new_list;
return (my_new_list);
}
else
{
return (NULL);
}
}
