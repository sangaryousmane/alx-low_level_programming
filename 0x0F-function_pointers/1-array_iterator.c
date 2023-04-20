#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array to print
* @size: size of the array
* @action: function that takes the @array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
