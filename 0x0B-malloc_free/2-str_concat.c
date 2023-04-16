#include <string.h>
#include "main.h"
/**
* str_concat - Write a function that concatenates two string
* @s1: string 1
* @s2: string 2
* Return: retuns concatenated string of @s1 and @s2
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *concat;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != 0)
{
i++;
}
while (s2[j] != 0)
{
j++;
}
concat = malloc((j + i + 1) * sizeof(char));
if (concat == NULL)
{
free(concat);
return (NULL);
}
while (s1[i] != '\0' && s2[j] != '\0')
{
concat[i] = s1[i];
concat[j] = s2[j];
s1++;
s2++;
}
return (concat);
}
