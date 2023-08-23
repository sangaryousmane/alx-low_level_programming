#include "main.h"

/**
* _putchar - writes a character to stdout
* @c: the character value
* Return: the output
*/
int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}
