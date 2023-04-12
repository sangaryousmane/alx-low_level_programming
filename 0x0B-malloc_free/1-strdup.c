#include <stdlib.h>
/**
* _strdup - returns a pointer to a copy of the new string
* @str: the existing string
* Return: pointer to the string copy
*/
char *_strdup(char *str)
{
char duplicate[];
if (str == NULL)
{
return (NULL);
}

duplicate = malloc(sizeof(char) * 3);

if (duplicate == NULL)
{
return (NULL);
}
duplicate = str;
free(duplicate);
return (duplicate);
}
