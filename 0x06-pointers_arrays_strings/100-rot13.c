#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13.
 * @str: pointer to an array
 * Return: pointer to @str
 */
char *rot13(char *str)
{
int i, j;
char entry1[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char entry2[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; ++i)
{
for (j = 0; entry1[j] != '\0'; j++)
{
if (str[i] == entry1[j])
{
str[i] = entry2[j];
break;
}
}

}
return (str);
}
