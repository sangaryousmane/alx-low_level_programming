#include <stdio.h>
#include "main.h"

/**
* _puts - print strings with a newline
* @s: strings of characters
* Return nothing
*/
void _puts(char *s)
{
  int i = 0;
  while (str[i] != '\0')
  {
    _putchar(str[i]);
  }
  _putchar('\n');
}
