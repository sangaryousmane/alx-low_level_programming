#include "main.h"

/**
* _strspn - returns the by counts in @s that is alson in @accept
* @s: first pointer
* @accept: second pointer
* Return: return the length of the count
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i, j;

for (i = 0; s[i] > '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
{
if (s[i] == accept[j])
{
bytes++;
break;
}
}
if (!accept[j])
{
break;
}
}
return (bytes);
}
