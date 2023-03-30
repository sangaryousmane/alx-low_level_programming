#include "main.h"
/**
* leet - Write a function that encodes a string into 1337.
* @str: points at the string in memory
* Return: a pointer to the string
*/
char *leet(char *str)
{
char subs[] = {'4', '3', '0', '7', '1'};
char letters[] = {'a', 'e', 'o', 't', 'l'};
for (int i = 0; str[i]; i++)
{
for (int j = 0; j < 5; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 'a' + 'A')
{
str[i] = subs[j];
break;
}
}
}
return (str);
}
