#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to standard output
 * @c: The character to print to standard output
 *
 * Return: On success 1 and -1 is return on errno
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

