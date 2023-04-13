#include <stdlib.h>
#include "main.h"
/**
 * _calloc - uses malloc to allocate memory for an array
 * @nmemb: number of memory block
 * @size: size of block
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr_mem;
unsigned int len, i;
len = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
arr_mem = malloc(len);

if (arr_mem == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
*((char *)arr_mem + i) = 0;
}
return (arr_mem);
}
