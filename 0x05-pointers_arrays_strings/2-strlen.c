#include "main.h"
#include <string.h>

/**
* _strlen - return the length of the @s argument
* Return: the size of the argument
* @s: array of string
*/
int _strlen(char *s)
{   
  int i = 0;
  for (; s[i] != '\0'; i++);
  return i;
}
