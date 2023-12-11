#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of
 * integers using the binary search algorithm
 * @array: is a pointer to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: -1 if value not found or array is NULL, else the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, start = 0, end = size - 1, i = 0;

	if (array == NULL)
		return (-1);

	while (start < end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = start + (end - start) / 2;


		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}
	}
	return (-1);
}
