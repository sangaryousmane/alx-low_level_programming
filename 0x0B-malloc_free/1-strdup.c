#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: the pointer to duplicate
* Return: a pointer
*/
char *_strdup(char *str)
{
int len = 0, i = 0;
char *new_str;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
{
len++;
}
new_str = (char *) malloc((len + 1) * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
