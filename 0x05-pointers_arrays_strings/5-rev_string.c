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
unsigned int i;
char temp;
size_t length = strlen(s);
for (i = 0; i < length / 2 ; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = s[i];
}
}
