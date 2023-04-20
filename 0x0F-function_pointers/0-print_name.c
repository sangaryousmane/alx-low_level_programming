#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to print
 * @f: function to invoke to display name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{

if (name && f)
{
f(name);
}
}
