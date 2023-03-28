#include "main.h"
#include <string.h>
/**
* print_rev - prints a string in reverse
* @s: argument to the print_rev function
* Return nothing
*/
void print_rev(char *s)
{
int len, i = 0;
len = strlen(s);
for (i = len - 1; i >= 0; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
}
