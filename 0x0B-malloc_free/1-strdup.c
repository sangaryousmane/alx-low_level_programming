#include <stdlib.h>

/**
* _strlen - return the string length
* @s: the string of characters
* Return: lenght of the string
*/
int _strlen(char *s)
{
int i = 0, length;
while (s[i] != '\0')
{
length += 1;
i++;
}
return (length);
}

/**
* _strdup - returns a pointer to a copy of the new string
* @str: the existing string
* Return: pointer to the string copy
*/
char *_strdup(char *str)
{
int i, length;
char *duplicate;
if (str == NULL)
{
return (NULL);
}

length = _strlen(str);
duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
duplicate[i] = str[i];
}
duplicate[length] = '\0';
free(duplicate);
return (duplicate);
}

