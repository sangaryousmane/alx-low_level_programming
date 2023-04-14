#include "main.h"

/**
* array_range - creates an array of integers
* @min: start from
* @max: to
* Return: a pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *arr;
int i;
int size = max - min + 1;

if (min > max)
{
return (NULL);
}
arr = malloc(size * sizeof(int));
if (!arr)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min++;
}
return (arr);
}
