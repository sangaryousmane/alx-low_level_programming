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
s = malloc(sizeof(size) * size);
s[0] = c;
s[1] = '\0';
if (size == 0)
{
return (NULL);
}
return (s);

}
