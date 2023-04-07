#include "main.h"

/**
 * wildcmp - compares two strings using recursion
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else if (*s2 == '*')
{
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
else
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
}
else
{
return (0);
}
}
