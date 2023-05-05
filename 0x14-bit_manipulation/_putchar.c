#include "main.h"

/**
* _putchar - return a char
* @c: character to print
* Return: the character
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}
