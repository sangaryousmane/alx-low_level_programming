#include "main.h"
#include <string.h>
/**
* to_strlen - returns length of @s
* @s: parameter of the function
* Return: lenght of the function
*/
int to_strlen(char *s)
{
int i, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
return (count);
}
/**
* print_rev - prints a string in reverse
* @s: argument to the print_rev function
* Return nothing
*/
void print_rev(char *s)
{
int len, i = 0;
len = to_strlen(s);
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

