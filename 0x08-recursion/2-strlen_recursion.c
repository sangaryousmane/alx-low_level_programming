#include "main.h"

/**
* _strlen_recursion - returns the lenth of @s
* @s: is the pointer of the function parameter
* Return: the length of @s
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
