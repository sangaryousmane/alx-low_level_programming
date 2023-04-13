#include "main.h"
#include <stdlib.h>
/**
* array_range - an array of integers
* @min_value: the first element
* @max_value: the last element
* Return: a pointe to new array.
*/
int *array_range(int min_value, int max_value)
{
int *new_array;
int i = 0, j, array_size;

if (min_value > max_value)
{
return (NULL);
}
array_size = max_value - min_value + 1;
new_array = malloc(sizeof(int) * array_size);
if (new_array == NULL)
{
return (NULL);
}
while (i < array_size)
{
*(new_array + i) = min_value + i;
i++;
}
return (new_array);
}
