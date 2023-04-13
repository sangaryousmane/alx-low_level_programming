#include "main.h"

/**
 * malloc_checked - uses the malloc() function to allocate memory
 * @b: bytes to allocate
 * Return: a pointer that is void
 */
void *malloc_checked(unsigned int b)
{
void *my_pointer;
my_pointer = malloc(b);
if (my_pointer != NULL)
{
return (my_pointer);
}
exit(98);
}

