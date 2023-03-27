#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: argument to the print_rev function
* Return nothing
*/
void print_rev(char *s)
{
if (*s)
{
print_rev(s + 1);
_putchar(*s);
}
}
