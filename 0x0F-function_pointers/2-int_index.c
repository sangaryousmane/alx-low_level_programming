#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array to search
* @size: size of an array
* @cmp: function to compare
* Return: index of the element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size > 0)
{
if (array && cmp)
{
for (; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
}
return (-1);
}
