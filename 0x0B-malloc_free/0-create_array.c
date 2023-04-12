#include "main.h"
#include <stdlib.h>

/**
* create_array - return pointer to the array
* @size: size of the int,
* @c: character to assign
* Return: a pointer to the character array
*/
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);

if (s == NULL)
{
return (NULL);
}

while (i < size)
{
s[i] = c;
i++;
}
return (s);

}
