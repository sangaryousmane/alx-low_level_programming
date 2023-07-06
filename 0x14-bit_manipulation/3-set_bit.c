#include "main.h"


/**
* set_bit - set bit at an index
* @n: point to a long int
* @index: the index
* Return: 1 if it worked, -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 63)
	{
		return (-1);
	}
	m = <<= index;
	if ((*n & m) == 0)
	{
		*n |= mask;
	}
	return (1);
}
