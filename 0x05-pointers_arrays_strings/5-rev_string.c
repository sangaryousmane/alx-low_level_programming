#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - reverse a string
* @s: a pointer to a string
* Return nothing
*/
void rev_string(char *s)
{
int i;
for (i = strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
