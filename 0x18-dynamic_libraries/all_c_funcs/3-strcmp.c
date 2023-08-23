#include "main.h"

/**
* _strcmp - compares two strings and returns an int.
* @s1: first string
* @s2: second string
* Return: the result of the comparison.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
