#include "main.h"
#include <stdlib.h>
/**
* array_range - an array of integers
* @min: the first element
* @max: the last element
* Return: a pointe to new array.
*/
int *array_range(int min, int max)
{
int *new_array;
int i = 0, j, array_size;

if (min > max)
{
return (NULL);
}
array_size = max - min + 1;
new_array = malloc(sizeof(int) * array_size);
if (new_array == NULL)
{
return (NULL);
}
while (i < array_size)
{
*(new_array + i) = min + i;
i++;
}
return (new_array);
}
