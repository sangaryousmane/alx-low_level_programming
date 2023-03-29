#include "main.h"
#include "string.h"

/**
* puts_half - prints first half of a string
* @str : is the param of the function
* Return nothing
*/
void puts_half(char *str)
{
int length = strlen(str);
int half = length / 2;
int i;

if (length % 2 != 0)
{
half++;
}
for (i = half; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
