#include "main.h"
/**
* string_toupper - convert lowercase string to uppercase.
* @s: the string to take
* Return: the string pointed to
*/
char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
