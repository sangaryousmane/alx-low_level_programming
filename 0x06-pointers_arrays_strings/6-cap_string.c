#include "main.h"

/**
* cap_string - is use to capitalize first letter of each word
* @str: the pointer
* Return: a pointer to the @str array
*/
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{

if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
|| str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
|| str[i - 1] == '{' || str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
i++;
}
return (str);
}
