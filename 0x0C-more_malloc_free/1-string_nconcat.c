#include <stdlib.h>

/**
* string_nconcat - allocates a block of memory to store concatenated strings.
* @s1: string one
* @s2: string two
* @n: bytes of 2 to concatenate to 1
*
* Return: a pointer to allocated memory block.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
while (s1 != NULL && *(s1 + len1) != '\0')
{
len1++;
}
while (s2 != NULL && *(s2 + len2) != '\0')
{
len2++;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
*(result + i) = *(s1 + i);
}

for (j = 0; j < n && j < len2; j++)
{
switch (s2 != NULL)
{
case 1:
*(result + i + j) = *(s2 + j);
break;
case 0:
*(result + i + j) = '\0';
break;
}
}
*(result + i + j) = '\0';
return (result);
}
