#include "main.h"
#include <stdio.h>
/**
* rev_string - reverse a string
* @s: a pointer to a string
* Return nothing
*/
void rev_string(char *s)
{
int i;
i = 0;
printf("%s\n", s);
while (s[i] != 0)
{
i++;
}

for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
